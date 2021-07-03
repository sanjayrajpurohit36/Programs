// isNumber
const { log } = console; // destructured log function from console object
let number = 12;
let numberStr = "12";
let numberFloat = 124.34;

log(Number.isInteger(number)); //true
log(Number.isInteger(numberStr)); // false
log(Number.isInteger(numberFloat)); // false
