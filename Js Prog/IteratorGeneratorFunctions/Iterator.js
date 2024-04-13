/* 
    Create an custom Iterator 
    Defination:
    Iterator is an object which returns a sequence of iteration and a value upon it's termination.

    Iterator and generators brings concept of iteration direction into the core language & provide a mechanism to alter / customize
    the behaviour of for ... of loop

    Custom iterators are complex to code as it requires to maintain their internal state, that's why Generators comes into the picture.


    Generators provide a powerful alternative: by which they allow us to write an iterative algo using a single function whose execution 
    is not continous, 
    Syntax: function *()

    When called, generator functions do not initially execute their code. 
    Instead, they return a special type of iterator, called a Generator.
    
    When a value is consumed by calling the generator's next method, 
    the Generator function executes until it encounters the yield keyword.

    For Working Example: Refer Generator

    Link: https://developer.mozilla.org/en-US/docs/Web/JavaScript/Guide/Iterators_and_Generators
*/

function makeRangeIterator(start = 0, end = Infinity, stepSize = 1) {
    let nextIndex = start;
    let iterationCount = 0;

    const rangeIterator = {
        next() {
            let result;
            if (nextIndex < end) {
                result = { value: nextIndex, done: false };
                nextIndex += stepSize;
                iterationCount++;
                return result;
            }
            return { value: iterationCount, done: true }; // at this point the iteration is over
        },
    };
    return rangeIterator;
}

let rangeIteratableObject = makeRangeIterator(0, 10, 1);

let res = rangeIteratableObject.next();

while (!res.done) {
    console.log("Iteration value =>", res.value);
    res = rangeIteratableObject.next();
}
