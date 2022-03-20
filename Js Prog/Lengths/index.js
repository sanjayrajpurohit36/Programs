/*
    Difference between Array length and String Length? 
    Ans : Array's length prop can be modified but string length prop can't be 
    modified as strings are immutable in JS.1
*/

class Length {
    constructor() {
        this.str = "teststr"
        this.arr = [1, 2, 3, 4, 5]
    }

    modifyLengths() {
        // modifying array's length
        console.log("string length:", this.str.length);
        // this.str.length = 2; // This can't be done as length prop. of a string is immutable as string in Js is also immutable
        console.log("modified str length:", this.str.length);

        // modifying array's length
        console.log("arr:", this.arr.length);
        this.arr.length = 2; // this is possible
        console.log("modified arr length:", this.arr.length);
        console.log("modified arr:", this.arr);   
    }
};

const length = new Length();
length.modifyLengths()