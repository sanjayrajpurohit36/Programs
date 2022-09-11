/*
    Write a function which reutrns the sum of passed params like this
    sum(10, 20) //output : 30
        & works in this case as well
    sum(10)(20)() // output : 30
*/

function add(...args) {
    if (args.length > 1) {
        let sum = 0;
        args.map((val) => {
            sum += val;
        })
        return sum;
    }
    else {
        return function (b) {
            if (!b) {
                return args[0];
            }
            return add(args[0] + b)
        }
    }
}

console.log(add(10, 20));
console.log(add(10)(20)());



/*
    Concept used Function Currying, Closure
*/