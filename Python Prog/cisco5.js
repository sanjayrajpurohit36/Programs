function countProperFractions(max_d) {
  let phi = [];
  let sum = 0;
  for (let i = 0; i <= max_d; i++) {
    phi.push(i);
  }

  for (let i = 2; i <= max_d; i++) {
    if (phi[i] === i) {
      for (let j = i; j <= max_d; j += i) {
        phi[j] = (phi[j] / i) * (i - 1);
      }
    }
    sum += phi[i];
  }
  return sum;
}
