/*
    An exercise to clear the concept of HIGHER ORDER FUNCTIONS OF JS (MAP)
*/

const arr = [
    {name: "Elon", lastName:"Musk", age: 35},
    {name: "Tim", lastName:"Cook", age: 50},
    {name: "Bill", lastName:"Gates", age: 59},
    { name: "Tony", lastName: "Stark", age: 35 },
    {name: "Mark", lastName:"Zuckerberg", age: 35},
  ]
  
/* 
    Problem: Wap a map function to get the names of the people along with their surnames output
    Eg : ["Elon Musk", "Tim Cook", ...]
*/
  let fullNamesArr  = arr.map((value) => value.name +" "+ value.lastName)
  
  console.log(fullNamesArr)