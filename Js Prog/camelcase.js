/**
    Convert the given statement in to camelcase.
 */

let str = "how are you ? I am fine";
strList = str.split(" "); // strList = [ 'how', 'are', 'you', '?', 'I', 'am', 'fine' ]
let camelCaseStr = "";
strList.map((data, key) => {
    let upperCaseWord = data[0].toLocaleUpperCase() + data.substr(1); /* this will convert the 
    first character of the word in uppercase and will add the remaning characters 
    of that word */
    strList[key] = upperCaseWord // adding the converted words back to the strList
});
console.log("Ans:", strList.join(" "));
