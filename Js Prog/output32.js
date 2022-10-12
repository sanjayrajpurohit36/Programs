/*
    What will be the output of the following code
    Concept: pass by reference
*/

let obj = { number: 5 }

function increment(x = {...obj}) {
    x.number += 5
}

increment();
console.log(obj);
increment();
console.log(obj);
increment(obj)
console.log(obj);
increment(obj);
console.log(obj);




/*
    Output:
    { number: 5 }
    { number: 5 }
    { number: 10 }
    { number: 15 }
*/