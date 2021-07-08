/*
Calculate the freq of every word in a sentence.
*/

function wordFreq(str) {
  let strArr = str.split(" ");
  let freq = {};
  strArr.forEach((value) => {
    if (freq[value]) {
      freq[value]++;
    } else freq[value] = 1;
  });
  console.log(freq);
}
let str = "hello how are you hello how are you I am fine here";
wordFreq(str);
