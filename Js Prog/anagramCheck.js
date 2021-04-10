var strA = "abc";
var strB = "cbz";
var isAnagram = true;
var mapA = {};
var mapB = {};
if (strA.length == strB.length) {
  for (var i = 0; i < strA.length; i++) {
    if (mapA[strA[i]]) {
      mapA[strA[i]] += 1;
    } else {
      mapA[strA[i]] = 1;
    }
    if (mapB[strB[i]]) {
      mapB[strB[i]] += 1;
    } else {
      mapB[strB[i]] = 1;
    }
  }
  Object.keys(mapA).map((key) => {
    if (mapA[key] != mapB[key]) {
      isAnagram = false;
    }
  });
  console.log("isAnagram =>", isAnagram);
} else console.log("Not anagram");
