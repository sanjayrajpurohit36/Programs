/**
 * Write a function to modify a given string acording to the below mentioned eg.
 * input: aabccbbbbdd
 * output: a2b1c2b4d2
 */

class Sol {
  
  constructor(str) {
    this.str = str;
  }

  modifyStr = () => {
    let count = 1, i = 0;
    let res = '';
    while(i<this.str.length) {
      if(this.str[i] == this.str[i+1]) 
        count++;
      else {
        res += this.str[i];
        res += count;
        count = 1;
      }
      i++;
    }
  return res;
  }
};

let arrStr = ["aabccbbbbdd", "aabvbccb", "abc", "aaa"];
arrStr.forEach((value) => {
  let s = new Sol(value);
  console.log(s.modifyStr());
});