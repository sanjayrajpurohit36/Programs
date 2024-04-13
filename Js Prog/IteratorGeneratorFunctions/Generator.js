/*
    Write a generator function.

    Generators provide a powerful alternative: by which they allow us to write an iterative algo using a single function whose execution 
    is not continous, 
    Syntax: function *()

    When called, generator functions do not initially execute their code. 
    Instead, they return a special type of iterator, called a Generator.
    
    When a value is consumed by calling the generator's next method, 
    the Generator function executes until it encounters the yield keyword.

    it can be used as many times as we want, it will always return us an iterator
*/

function* incrementor(start = 0, end = Infinity, step = 1) {
    for (let i = 0; i < end; i += step) {
        yield i;
    }
}

let iterator = incrementor(0, 10, 1);
for (let i of incrementor(0, 10, 1)) {
    console.log(i);
}

for (let j of incrementor(0, 100, 10)) {
    console.log("value of second incrementor", j);
}
