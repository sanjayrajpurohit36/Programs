                /*  Basic string functions explained....
                */               
var fname = "Sanjay";
var sname = "Rajpurohit";
var fullname = "Sanjay Rajpurohit";
var space_name = "   Sanjay    Rajpurohit   ";
var x = 48; //ASCII of 48 is '0'.
var Obj = { 
    fname: "Sanjay",
    lanme: "Rajpurohit",
    age:21 
}
var myjson = [{
    fname: "Sanjay",
    lanme: "Rajpurohit",
    age:21 
}]
console.log("Char at 0:",fname.charAt(0));
console.log("ACSII value of char at 0:",fname.charCodeAt(0));
console.log("Concatenation of fname and sname:",fname.concat(sname));
console.log("fname Ends with aye ",fname.endsWith('ay'));
console.log("ASCII value of 48:",String.fromCharCode(x));
console.log("If fname contaains s:",fname.includes('sanjay'));   //case sensitive
console.log("Index of char found at first place:",fname.indexOf('S'));
console.log("Index of char found at last place:",fname.lastIndexOf('S'));
console.log("Comparing strng|regxp with str.compare",fname.match('an'));
console.log(fname.repeat(2));
console.log(fname.replace("Sanjay","Rahul"));
console.log(fname.search('a'));
console.log(fullname.split(" "));
// console.log(fname.splice(0,0," Rajpurohit"));
console.log(fullname.startsWith("san"));
console.log("Substr:",fullname.substr(0,6));
console.log("Slice:",fullname.slice(0, 6)); //creates a new strig by extracting the char from the given positions
console.log(space_name.trim());
console.log(fullname.toUpperCase());    // dosen't changes the main string\
console.log(fullname);
console.log(eval("7+5"));
console.log(isFinite(1));
console.log(Number(9999));
console.log(Number(true));
console.log(Number(false));
console.log(Number(NaN));
var JS = JSON.stringify(Obj);
console.log("JSON srtingified & type:",JS,typeof(JS));
var json = JSON.parse(myjson);
console.log(json);