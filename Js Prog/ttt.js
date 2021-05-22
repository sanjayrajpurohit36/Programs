tttm = [
  [1, 0, 0],
  [0, 1, 0],
  [0, 0, 1],
];
const SIZE = 3;
function printDiagonals(i, j) {
  console.log("Printing diagonal");
  // if clicked row,col comes as a diagonal
  if (i == j || i + j <= SIZE) {
    for (var i = 0; i < SIZE; i++) {
      for (var j = 0; j < SIZE; j++) {
        // if (i == j) console.log(tttm[i][j]);
        if (i + j == SIZE - 1) console.log(tttm[i][j]);
      }
    }
  }
}
function checkWinner(i, j) {
  // case 1 : diagonal check
  printDiagonals(i, j);
  console.log("\n\n\n");

  // case 2 : row check
  console.log("row print", i, j);
  for (var k = 0; k < SIZE; k++) {
    console.log(tttm[i][k]);
  }
  console.log("\n\n\n");

  // case 3 column check
  console.log("column print", i, j);
  for (var i = 0; i < SIZE; i++) {
    console.log(tttm[i][j]);
  }
}
checkWinner(2, 1);
