/**
 *  Implement a memoized function for multiplying two big numbers in JS.
 *  If user provides same numbers again and again the calculation part should not be performed.
 */

let memoizedMultiplication = (function () {
    let ans, prevArg1, prevArg2;
    
    return (function (arg1, arg2) {
        if ((prevArg1 == arg1 && prevArg2 == arg2) || (prevArg1 == arg2 && prevArg2 == arg1))
            return ans;
        else {
            prevArg1 = arg1, prevArg2 = arg2;
            /* this loop is is being added to increase the execution time of the function which will clearly 
                show the time difference between normal function call and memoized function call. 
            */
            for (let i = 0; i < 100000000; i++) { }
            ans = arg1 * arg2;
            return ans;
        }
    });
})();
  
// To check the execution time of the function I've added time and timeEnd
console.time("Execution Time")
console.log(memoizedMultiplication(9878, 99989));
console.timeEnd("Execution Time")


console.time("Execution Time")
console.log(memoizedMultiplication(99989, 9878));
console.timeEnd("Execution Time")
  

