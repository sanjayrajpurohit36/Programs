/*
    EXERCISE FOR REDUCE
*/

const arr = [
    { firstName: "Elon", lastName: "Musk", age: 35 },
    { firstName: "Tim", lastName: "Cook", age: 50 },
    { firstName: "Bill", lastName: "Gates", age: 59 },
    { firstName: "Tony", lastName: "Stark", age: 35 },
    { firstName: "Mark", lastName: "Zuckerberg", age: 35 },
];

/* 
    Problem: Return an object of the frequencies of the ages 
    Ex: { 35: 3, 50:1, 59:1 } 
*/
let uniqueAgeObj = arr.reduce((acc, currValue) => {
    if(acc[currValue.age])  { acc[currValue.age] =  acc[currValue.age] + 1; }
    else { acc[currValue.age] = 1; }
    return acc;
}, {})
  
console.log(uniqueAgeObj);