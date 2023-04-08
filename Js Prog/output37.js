/*
    What will be the output of the following code.
*/

const arr = [1,2,3];
arr.foo = "hi";

console.log(arr);



/*
    arr is also an object so when we assign value "hi" to the key "foo", then the value gets appended to the array
    against the key foo.
    hence the output will be [ 1, 2, 3, foo: "hi"]
*/