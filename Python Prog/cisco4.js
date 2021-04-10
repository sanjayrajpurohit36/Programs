function counter(str) {
  return str.split("").reduce((total, letter) => {
    total[letter] ? total[letter]++ : (total[letter] = 1);
    return total;
  }, {});
}

function perfectSubstring(str, k) {
  var i,
    j,
    result = [];

  let count = 0;
  for (i = 0; i < str.length; i++) {
    for (j = i + 1; j < str.length + 1; j++) {
      let res = counter(str.slice(i, j));
      if (Object.values(res)[0] === k) {
        if (Object.values(res).every((v) => v === k)) count += 1;
      }
    }
  }

  return count;
}
