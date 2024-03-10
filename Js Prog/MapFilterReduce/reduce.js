/*
    EXERCISE FOR REDUCE
*/

const arr = [
    { firstName: "Elon", lastName: "Musk", age: 35 },
    { firstName: "Tim", lastName: "Cook", age: 50 },
    { firstName: "Bill", lastName: "Gates", age: 59 },
    { firstName: "Tony", lastName: "Stark", age: 35 },
    { firstName: "Mark", lastName: "Zuckerberg", age: 35 },
    { firstName: "Peter", lastName: "Parker", age: 21}
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




/*
    Problem : Return the first name of all the people if their age is less than 26
    Ex: [Peter]
*/

let person = arr.reduce((acc, curr) => {
    if (curr?.age < 26) {
        acc.push(curr?.firstName);
    }
    return acc;
}, []);

console.log(person);