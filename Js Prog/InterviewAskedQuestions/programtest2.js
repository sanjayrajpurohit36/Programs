/*                     NoBroker Interview                   */
// Note: uncomment the code and check the output

/**
 * Move all the zeros to the right O(n) time and 0(1) space
 *  Input const arr = [0, 0, 1, 5, 7, 2, 0, 4, 0];
 *                    [1, 0, 0, 5, 7, 2, 0, 4, 0];
 * Output [1, 5, 7 , 2, 4, 0, 0 , 0, 0]
 * @param array
 * @function moveZero
 * @return Array in which all the zeros are on the right side.
 * (Used Two pointer approach / Sliding window approach)
 */

// const arr = [1, 0, 0, 5, 7, 2, 0, 4, 0];

// const moveZero = (arr) => {
//   let start = 0;
//   let end = arr.length - 1;
//   while (start <= end) {
//     if (arr[start] == 0 && arr[end] != 0) {
//       let temp = arr[start];
//       arr[start] = arr[end];
//       arr[end] = temp;
//       start += 1;
//       end -= 1;
//     } else if (arr[start] != 0 && arr[end] != 0) {
//       start += 1;
//     } else end -= 1;
//   }
//   console.log(arr);
// };

// moveZero(arr);

/**
 * Create aAunique function which will print the incremented value of the previous value every time we call.
 * Constraints: Cannot pass any value to the function & can't decalre a global var.
 * @param empty
 *  @function unique
 *  @return  Integer
 *  Used closure and self invoking functions
 */

// let unique = (function () {
//   let x = 1;
//   return function () {
//     return x++;
//   };
// })();

// console.log(unique()); 1
// console.log(unique()); 2
// console.log(unique()); 3

/**
 * Create a Promise which will return a sum of the passed values & also checks that if the values are appropriate or not.
 * @param {any} a
 * @param {any} b
 * @returns Promise
 */
// function add(a, b) {
//   return new Promise((resolve, reject) => {
//     if (a >= 0 && b >= 0) resolve(a + b);
//     else reject("Error arguments are not proper");
//   });
// }

// add(2, 3)
//   .then((res) => console.log(res))
//   .catch((err) => console.error(err));
