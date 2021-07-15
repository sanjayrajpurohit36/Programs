/*
    What will be the output of this program
*/
x = new Array();
y = new Array();
x[1] = 1;
y[2] = 2;
x = y;
console.log(x[1], x[2]); // Output:  undefined,2

/* Explanation :
x[1] = 1 which can be written as x = [undefined, 1]
y[2] = 2 which can be written as x = [undefined, undefined, 2]
x = y means
[undefined, 1] = [undefined, undefined, 2]
x will become [undefined, undefined, 2]
so 
console.log(x[1])  => undefined
console.log(x[2])  => 2
*/
