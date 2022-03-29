/*
    EXERCISE FOR FILTER
*/

const arr = [
    { firstName: "Elon", lastName: "Musk", age: 35 },
    { firstName: "Tim", lastName: "Cook", age: 50 },
    { firstName: "Bill", lastName: "Gates", age: 59 },
    { firstName: "Tony", lastName: "Stark", age: 35 },
    { firstName: "Mark", lastName: "Zuckerberg", age: 35 },
];

/* 
    Problem: Write a filter to get the names firstName of all the people whose age is less than 40
    Eg : ["Elon", "Tont", Mark]
*/
    // Yes we can chain these Higher order functions
let youngPeopleArr = arr.filter((value) => value.age < 40).map((x) => x.firstName);
console.log(youngPeopleArr)












// Do the same task using reduce checkout the below code

let youngPeopleArr2 = arr.reduce((acc, currValue) => {
    if(currValue.age < 40) acc.push(currValue.firstName)
    return acc;
}, [])

console.log(youngPeopleArr2)