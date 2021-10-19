//WAP TO FIND THE SECOND LARGEST NUMBER IN THE ARRAY!

const getSecondLargest = (nums) => {
  const arr = nums.sort((a, b) => b - a);
  const setArr = new Set(arr);
  const newArr = [...setArr];
  return newArr[1];
};

console.log(getSecondLargest([100, 21, 233, 56, 239, 21]));

// ALTERNATIVE SOLUTION!
const getSecondLargest2 = (nums) => {
  return [...new Set(nums)].sort((a, b) => b - a)[1];
};
console.log(getSecondLargest2([100, 21, 233, 56, 239, 21]));
