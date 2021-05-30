/**
 * Find all the good pair in an array & return their count
 * A pair (i,j) is called good if nums[i] == nums[j] and i < j.
 * @param {} arr
 * */
function goodPairs(arr) {
  pairCounter = 0;
  mp = {};
  arr.forEach((i) => {
    // console.log(mp, i);
    if (mp[i]) {
      pairCounter += mp[i]["size"];
      mp[i]["hw"].push(i);
      mp[i]["size"] += 1;
    } else {
      mp[i] = { hw: [i], size: 1 };
    }
  });

  console.log(pairCounter);
}

goodPairs([1, 1, 1, 1]); // 6
goodPairs([1, 2, 3, 1, 1, 3]); // 4
goodPairs([1, 2, 3]); // 0
