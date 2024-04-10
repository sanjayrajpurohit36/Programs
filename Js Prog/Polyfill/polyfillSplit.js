/*
    Create a polyfill for split function in Js, such that if we don't pass
    any delimiter to the function then by default it should take "$" as the delimiter.
*/

let str = "abc$d"; // Output [abc, d]

String.prototype.acutalSplit = String.prototype.split;
// Storing original split function in String's prototype so that we can use it while creating modified polyfill

// Polyfill
String.prototype.split = function (pattern = "$") {
        let ans = [];
        if(!pattern || pattern.length > this.length  ) 
          ans.push(this);
        else if(pattern.length == 0)
          ans.push(...this)
        else {
          let tempStr = '';
          let comparedStr = ''
          for(let i = 0,j = 0; i < this.length ; ) {
            
            if(this[i] === pattern[j]) {
              let k = 1;
              let isMatched = true;
              
              comparedStr += this[i++]; // setting the already matched char in the comparedStr and skipping that matched character to reduce one extra comparison
              j++; // skipping the already matched char of pattern 
      
              for(k ; k < pattern.length && k < this.length; k++) {
                comparedStr += this[i];
                if(str[i++] !== pattern[j++]) {
                  isMatched = false;
                  break;
                }
              }
              j = 0; // if the pattern is matched or not we need to start the comparison for the pattern again from 0th index.
              if(isMatched) {
                ans.push(tempStr); // pushing all the chars before the pattern into the ans array 
                tempStr = ''
                comparedStr = ''
              } else {
                tempStr += comparedStr;
                comparedStr = '';
              }
            } else {
                tempStr +=this[i];
                i++;
            }
          } 
          ans.push(tempStr);
        }
        return ans;
};

console.log(str.split());
