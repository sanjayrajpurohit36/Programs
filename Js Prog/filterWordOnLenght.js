/*
    Given an array of strings, you need to return an array which,
    contains the strings that are greater than a speific value only. 
*/
/*
    function sortwords
    @param words Array
    @param length Number
*/
const sortWords = (words, number) => {
    const ans = words.filter((word) => word.length > number);
    return ans;

}

const words = ["react", "script", "interview", "style", "javascript", "css"];
let ans = sortWords(words, 4);
console.log(ans); // ['interview', 'javascript']
