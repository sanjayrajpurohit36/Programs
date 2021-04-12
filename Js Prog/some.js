                /*  Checks if any element passes the test.
                    if yes    returns "true" and stops checking further
                    if any element dosen't passed the test. then returns the "false"
                        */ 
var fruits = [12,1,2,3,4,5,11];
function check(num) {
    return num > 20
}
function check1(num) {
    return num > 10
}
console.log("None of the element is gt than 20: ",fruits.some(check));
console.log("Atleast one of the element is gt than 10: ",fruits.some(check1));

