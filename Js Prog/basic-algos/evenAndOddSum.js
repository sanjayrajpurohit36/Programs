//WAP TO FIND THE SUM OF EVEN AND ODD!

const evenOddSums = (arr) => {
  let oddSum = 0;
  let evenSum = 0;
  const ans = [];
  arr.forEach((i) => (i % 2 === 0 ? (evenSum += i) : (oddSum += i)));
  ans.push(evenSum, oddSum);
  console.log(ans);
};
evenOddSums([50, 60, 60, 45, 71]);
