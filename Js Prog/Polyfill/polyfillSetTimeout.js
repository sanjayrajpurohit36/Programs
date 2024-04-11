/*
    Write polyfill for setTimeout
*/

// Add these two lines for dynamically adding the heading of the html doc
const body = document.getElementsByTagName("body");
const headingElement = document.createElement("h2");
body[0].appendChild(headingElement);
headingElement.appendChild(
    document.createTextNode("Testing Polyfill for SetTimeout")
);

// Polyfill starts from there

function SetTimeoutPolyfill() {
    let timeOutMap = {};
    let id = 0;

    function setTimeoutPoly(callback, delay = 0, ...args) {
        id += 1;
        timeOutMap[id] = callback; // we can set true as well here in map
        let time = Date.now();
        function checkTimerToCall() {
            if (!timeOutMap[id]) {
                return;
            } else {
                if (time + delay <= Date.now()) {
                    callback.apply(this, args);
                } else requestIdleCallback(checkTimerToCall);
            }
        }
        requestIdleCallback(checkTimerToCall);
        return id;
    }

    function clearTimeout(timerId) {
        if (timeOutMap[timerId]) delete timeOutMap[timerId];
    }

    return { setTimeoutPoly, clearTimeout };
}
var { setTimeoutPoly, clearTimeout } = SetTimeoutPolyfill();

console.log("Start");

setTimeoutPoly(
    (x, y, z) => {
        console.log("Timeout", x, y, z);
    },
    1000,
    1,
    2,
    3
);

console.log("End");
/* 
    Expected Output : 
    Start
    End
    Timeout
*/
