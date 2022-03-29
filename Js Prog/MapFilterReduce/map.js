/*
    An exercise to clear the concept of 
    HIGHER ORDER FUNCTIONS OF JS (MAP, FILTER, REDUCE)
    
    TOPIC: MAP
*/

const arr = [
    { firstName: "Elon", lastName: "Musk", age: 35 },
    { firstName: "Tim", lastName: "Cook", age: 50 },
    { firstName: "Bill", lastName: "Gates", age: 59 },
    { firstName: "Tony", lastName: "Stark", age: 35 },
    { firstName: "Mark", lastName: "Zuckerberg", age: 35 },
];
  
/* 
    Problem: Wap a map function to get the names of the people along with their surnames output
    Eg : ["Elon Musk", "Tim Cook", ...]
*/
  let fullNamesArr  = arr.map((value) => value.firstName +" "+ value.lastName)
  
  console.log(fullNamesArr)