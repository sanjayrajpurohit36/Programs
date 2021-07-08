/*
    Problem: Sorting the array according to freq in ascending order but if the freq of two values are same the put the smaller value first.
*/
let arr = [1, 2, 3, 5, 6, 8, 8, 7, 3, 3, 3, 1, 2, 1, 1, 3, 4, 0];
/**
 * Function to return the freq of the array
 * @returns
 */
function getFreq() {
  let freq = {};
  arr.forEach((value) => {
    if (freq[value]) freq[value]++;
    else freq[value] = 1;
  });
  return freq;
}

/**
 * Main Code Logic
 */
function arrangeFreq() {
  let arrFreq = getFreq();
  let tArr = [];
  // Creating the array of arrays with the following structure : [[value, freq], [value, freq]]
  Object.keys(arrFreq).map((value, key) => {
    tArr.push([value, arrFreq[value]]);
  });

  // sorting this [[value, freq], [value, freq]] according to the freq value but
  //   if two frequencies are same then putting the smaller value first.
  tArr.sort((a, b) => {
    if (a[1] == b[1]) return a[0] - b[0];
    else return a[0] - b[1];
  });

  // Printing the ans
  tArr.forEach((value) => {
    console.log(value[0]);
  });
}
arrangeFreq();
