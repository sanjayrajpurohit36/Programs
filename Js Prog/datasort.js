// /**
//  * Constant defiend for month keys
//  */
// const monthKeyMap = {
//   JAN: 1,
//   FEB: 2,
//   MAR: 3,
//   APR: 4,
//   MAY: 5,
//   JUN: 6,
//   JUL: 7,
//   AUG: 8,
//   SEPT: 9,
//   OCT: 10,
//   NOV: 11,
//   DEC: 12,
// };

// function sortDataAccordingToMonth(a, b) {
//   if (a[2] === b[2]) return 0;
//   else return a[2] < b[2] ? -1 : 1;
// }

// function dataRearrange(bData) {
//   const {
//     data: { series, categories },
//   } = bData;
//   let threeDMatrix = [];
//   let tempAry = [];
//   if (series.length === categories.length) {
//     series.forEach((value, key) => {
//       tempAry = [];
//       tempAry = [value, categories[key], monthKeyMap[categories[key]]];
//       threeDMatrix.push(tempAry);
//     });

//     threeDMatrix.sort(sortDataAccordingToMonth);

//     console.log("ThreeD MATRIX ===>", ...threeDMatrix); // sorted 3D matrix
//   }
// }

// // data from api
// let bData = {
//   grade: 2,
//   data: {
//     series: [550, 1200, 900, 1450, 960, 1100, 600, 1300],
//     categories: ["FEB", "MAR", "APR", "JUN", "JAN", "AUG", "MAY", "JUL"],
//   },
//   section: "A",
// };

// dataRearrange(bData);

function sortDataAccordingToMonth(a, b) {
  // console.log(a, b);
  if (a.label === b.label) return 0;
  else
    return a.label.localeCompare(b.label, "en", {
      sensitivity: "base",
      numeric: true,
    });
}

// function getSortedValues(response) {
//   let bData = {
//     grade: 2,
//     data: {
//       series: [550, 1200, 900, 1450, 960, 1100, 600, 1300],
//       categories: [
//         "February",
//         "May",
//         "January",
//         "March",
//         "July",
//         "June",
//         "October",
//         "August",
//       ],
//     },
//     section: "A",
//   };
//   if (response && response.length === 1) {
//     const monthKeyMap = {
//       January: 1,
//       February: 2,
//       March: 3,
//       April: 4,
//       May: 5,
//       June: 6,
//       July: 7,
//       August: 8,
//       September: 9,
//       October: 10,
//       November: 11,
//       December: 12,
//     };

//     const {
//       data: { series, categories },
//     } = bData;
//     let threeDMatrix = [];
//     let tempAry = [];
//     if (series.length === categories.length) {
//       series.forEach((value, key) => {
//         tempAry = [];
//         tempAry = [value, categories[key], monthKeyMap[categories[key]]];
//         threeDMatrix.push(tempAry);
//       });

//       threeDMatrix.sort(sortDataAccordingToMonth);

//       console.log("ThreeD MATRIX ===>", threeDMatrix); // sorted 3D matrix
//     }
//   } else return [];
// }

function getSortedValues() {
  let testData = ["Grade 10", "Grade 2", "Grade 9"];
  let data = [{ label: "Science" }, { label: "Maths" }];
  data.sort(sortDataAccordingToMonth);
  console.log(data);
}
getSortedValues([{}]);
