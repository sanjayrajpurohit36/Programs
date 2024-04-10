function SetTimeoutPolyfill(callback, delay) {
    function poly() {
        let timeOutMap = {};
        let id = 0;

        function checkTimerToCall() {
            let time = Date.now();
            timeOutMap[id++] = callback;
            if (!timeOutMap[id]) return;
            else {
                if (time + delay > Date.now()) {
                    callback.call(this, arguments);
                } else checkTimerToCall();
            }
        }
        // requestIdleCallback(checkTimerToCall());
        checkTimerToCall();
        return id;
    }

    function clearTimeout(timerId) {
        if (timeOutMap[timerId]) delete timeOutMap[timerId];
    }

    return { setTimeoutPoly: poly, clearTimeout };
}
var { setTimeoutPoly, clearTimeout } = SetTimeoutPolyfill();

console.log("Start");

setTimeoutPoly(() => {
    console.log("Timeout");
}, 1000);

console.log("end");
