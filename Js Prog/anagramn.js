var strMap = {};
let count = 0;
function checkAnagram(str) {
  if (strMap.keys().length() == 0) {
    str.split("").map((data) => {
      if (strMap[data]) {
        strMap[data] += 1;
      } else {
        strMap[data] = 1;
      }
    });
  }
}

str1 = "test";
str2 = "east";
checkAnagram(str1);
checkAnagram(str2);
