/*
    Given an array of arrays convert it to an array of Objects using es6 Array Destructuring prop.
*/

let arr = [["Sam","New York", 23],["Monica","New Jersey", 25],["Miley", "Mexico", 22]]

let ans = arr.map((value) => {
  let [ name, city, age ] = value; // Destructuring the array values
  return { name, city, age };
})

console.log(ans);
