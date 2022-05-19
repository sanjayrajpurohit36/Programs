/*
    Singelton Design Pattern
    Reference link: https://learnersbucket.com/examples/interview/singleton-design-pattern-in-javascript/
    Defination: In a singleton design pattern, only one object is created for each interface (class or function) and the same object is returned every time when called.    

*/

var printer = (function () {
    var printerInstance;

    function create () {

        function print() {
            // underlying printer mechanics
        }

        function turnOn() {
            // warm up
            // check for paper
        }

        return {
            // public + private states and behaviors
            print: print,
            turnOn: turnOn
        };
    }

    return {
        getInstance: function() {
            if(!printerInstance) {
            printerInstance = create();
            }
            return printerInstance;
        }
    };
})();


var officePrinter = printer.getInstance();
var officePrinter2 = printer.getInstance();
console.log(officePrinter === officePrinter2) 

/* 

    At last we're checking that whether the object1 and object2 are equal or not it will return true which,
    means obejct1 and object2 have same memory reference which confirms that even when we try to create different object instances this pattern will not allow us
    and that's why it is known as Singelton Design Pattern

*/