/* 
    Flatten a nested array and a depth level, write a function which flattens the given array upto only the given depth level.
    flatten(arr, depth, res = [])
    arr : input array
    depth : upto what level the array should be flattend
    res : for resultant array
    Eg: 
    let arr = [1,2,[3,[4,5]]];
    flatten(arr, 1); // [1,2,3,[4,5]];
    flatten(arr, 2); // [1,2,3,4,5]
*/


function flatten(arr, depth=1, res = []) {
    if(depth >= 1)
   { 
     for(let i = 0; i<arr.length; i++) {
       if(!Array.isArray(arr[i])) {
         res.push(arr[i])
       }
       else{
         flatten(arr[i], --depth , res); // 0
       }
     }
   } else {
     for(let j = 0; j < arr.length; j++)
       res.push(arr[j]);
   }
   return res;
}


let arr = [1,2,[3,[4,5]]];
console.log(flatten(arr, 1)); 
console.log(flatten(arr, 2));