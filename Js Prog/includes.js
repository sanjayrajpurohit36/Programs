/*  chech whether the given element is present in the var or not.
            var can be array or string....
            return bool(true/false)
        */
var ary = "246081";
console.log("10 present ? ", ary.includes(10)); // output false
console.log("1 present ? ", ary.includes(1)); // output true
console.log("81 present ? ", ary.includes(81)); // output true
console.log("01 present ? ", ary.includes(01)); // output true
console.log("40 present ? ", ary.includes(40)); // output false
