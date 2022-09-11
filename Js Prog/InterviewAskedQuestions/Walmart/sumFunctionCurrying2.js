/*
    Write a function which reutrns the sum of passed params like this
    sum(10, 20) // output : 30
        & works in this case as well
    sum(10)(20) // output : 30

    Constraint: This solution is only valid if there is only 2 level of function call
    sum()(), if the interviewr asks that there can be n no of continous function calls then
    check the solution in "sumFunctionCurrying.js".
*/

function add() {
    console.log(arguments);
    if (arguments.length > 1) {
        let sum = 0;
        for (let i = 0; i < arguments.length; i++) {
            sum += arguments[i];
        }
        return sum;
    }
    else {
        return function (b) {
            /*
                We are directly returning the sum because in the question it is given that there can't be N no of function calls.
                If there will be N no of contonous function calls then we'll have to handle that using recursion.
            */
            return (arguments[0] + b);
        }
    }
}

console.log("With Closure", add(10)(20));
console.log("Without Closure", add(10, 20));


/*
    Concept used Function Currying, Closure, and arguments
*/