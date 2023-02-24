/*
    You're given an object, you need to write a function which will process that object and return a new object with
    the given example.

    Create a with this singature like this
    Fn(obj)(1, 1, 1);
    Output:
    {
        a: {
            b: 3,
            c: 1,
        },
        d: -1,
    }

    I've created this function in which we're declaring a new var ans and creating the result object according to the
    sctructure of given object.

    If you're given the priviledge of updating the passed object then we'can directly use the passed object for storing
    the results.
*/

const obj = {
    a: {
        b: (a, b, c) => a + b + c,
        c: (a, b, c) => a + b - c,
        e: {
            f: (a, b, c) => (a + b) / c
        }
    },
    d: (a,b,c) => a-b-c,
}


// function result(obj) {
//     return function (...args) {
//         let ans = {};
//         for (let i in obj) {
//             if (typeof (obj[i]) === 'function') {
//                 let resultOfCalculation = obj[i](...args)
//                 ans = {
//                     ...ans,
//                     [i]: resultOfCalculation
//                 }
//             } else if(obj[i] && typeof obj[i] === 'object' && !Array.isArray(obj[i])) {
//                 let resultOfNestedObject = result(obj[i])(...args);
//                 ans = {...ans, [i] : {...resultOfNestedObject}}
//             }
//         }
//         return ans;
//     }
// }
// console.log(result(obj)(1, 1, 1))


// Function where we're using the passed object for storing the resultant values.

function result2(obj) {
    return function (...args) {
        for (let i in obj) {
            if (typeof (obj[i]) === 'function') {
                let resultOfCalculation = obj[i](...args)
                obj[i] = resultOfCalculation
            } else if(obj[i] && typeof obj[i] === 'object' && !Array.isArray(obj[i])) {
                result2(obj[i])(...args);
            }
        }
    }
}
result2(obj)(1, 1, 1)
console.log(obj)