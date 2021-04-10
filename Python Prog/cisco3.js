// Efficienr janitor
function efficientJanitor(weight) {
  // Write your code here
  weight = weight.sort((a, b) => a - b);
  let count = 0;
  while (weight.length > 0) {
    let small = weight.shift();
    while (weight.length > 0) {
      let big = weight.pop();
      if (big + small <= 3) break;
      count += 1;
    }
    count += 1;
  }
  return count;
}
