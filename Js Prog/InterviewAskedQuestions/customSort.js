/* 
You're given an array objects names cities and you need to sort that array according to the city type
but there is a catch that it should be sorted as // G > A > H > B means cities with 
type as G should be present at the first followed by the cities of tpe A,H,B.
*/

const cities = [
  {
    name: "oslo",
    type: "G",
  },
  {
    name: "london",
    type: "H",
  },
  {
    name: "budapest",
    type: "H",
  },
  {
    name: "tehran",
    type: "B",
  },
  {
    name: "kolkata",
    type: "A",
  },
  {
    name: "lahore",
    type: "B",
  },
  {
    name: "austin",
    type: "G",
  },
  {
    name: "auckland",
    type: "H",
  },
];

/*
    Optimal Solution as we just need oto create an object/map for cities.types and assign a value to them according to the result we want.
*/
// function optimalSort() {
//   const order = { G: 1, A: 2, H: 3, B: 4 };
//   cities.sort((a, b) => order[a.type] - order[b.type]);
//   return cities;
// }
// console.log(optimalSort());

/* 
    A non optimal solution coz in this solution the no of variables(arrays) we need to create is directly proportional to the cities.types 
    Remark : Bad Solution
*/
// function sort() {
//   let A = [];
//   let B = [];
//   let G = [];
//   let H = [];

//   for (let i = 0; i < cities.length; i++) {
//     if (cities[i].type == "A") {
//       A.push(cities[i]);
//     } else if (cities[i].type == "B") {
//       B.push(cities[i]);
//     } else if (cities[i].type == "H") {
//       H.push(cities[i]);
//     } else G.push(cities[i]);
//   }
//   return [...G, ...A, ...H, ...B];
// }
// console.log(sort());
