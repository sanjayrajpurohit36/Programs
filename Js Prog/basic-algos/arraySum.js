/*
    Find the sum of the given array without using the loop
*/
// Method 1: By using the recurssion but this method will alter the original array passed to the function.
function sum1(arr, ans = 0) {
    if(arr.length) {
      ans += arr[0]; 
      arr = arr.splice(1,arr.length); // removing the first element and assigning the arr the remaning array
      return sum1(arr, ans);
    } return ans;
  }
  

  // Method 2: By using recurssion but in this method original array will be altered
function sum2(arr, ans = 0,index = 0) {
  if(index < arr.length) {
    ans += arr[index];
    index++;
    return sum2(arr, ans, index);
    } return ans;
}  
 
  
var arr = [1,2,3,4,5];
console.log("Sum by Function1 : ", sum1(arr));

var arr2 = [1,2,3,4,5];
console.log("Sum by Function2 : ", sum2(arr2));
