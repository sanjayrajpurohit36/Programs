var arr = [1, 1, 0, 1, 1, 1],
  maxNoOfOnes = 0,
  counter = 0;
for (var i = 0; i < arr.length; i++) {
  if (arr[i] == 1) {
    counter += 1;
  } else {
    if (maxNoOfOnes < counter) {
      maxNoOfOnes = counter;
    }
    counter = 0;
  }
}
if (maxNoOfOnes < counter) maxNoOfOnes = counter;
console.log(
  "Max subarray length containing ones: =>",
  Math.max(maxNoOfOnes, counter)
);
