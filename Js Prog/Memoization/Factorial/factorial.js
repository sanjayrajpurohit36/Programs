/*
    Write a program which returns the factorial of a given number, but it should also use the concept of memoization
    to improve the program's efficiancy.

    Questions: How memoization will help in here?
    Answer: By using memoization we can store the factorials of different numbers which we enounter during calculating 
    the ans for a particular value and if the ans already exists in the memoized array then we will stop the calculation 
    and will return the result immediately.
*/

const memoizedFactorial = (function () {
    let fact = [0, 1];
    return function factorial(n) {
        // console.log(fact);  by uncommenting this line you can check the values of fact array getting set after every new input value
        if (n > 1) {
            let ans = fact[n];
            if (typeof ans !== "number") {
                console.log("going for recursion");
                ans = n * factorial(n - 1);
            }
            fact[n] = ans;
            return ans;
        }
        return 1;
    };
})();

console.log(memoizedFactorial(15));
console.log(memoizedFactorial(4));
console.log(memoizedFactorial(4));
console.log(memoizedFactorial(6));
console.log(memoizedFactorial(10));
