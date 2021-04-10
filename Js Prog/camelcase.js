let str = "how are you I am fine";
strList = str.split(" ");
let camelCaseStr = "";
strList.map((data) => {
    let subStrList = data.split("");
    let upperCaseChar = subStrList[0].toLocaleUpperCase();
    subStrList[0] = upperCaseChar;
    camelCaseStr = camelCaseStr + subStrList.join("");
});
console.log("===>", camelCaseStr);
