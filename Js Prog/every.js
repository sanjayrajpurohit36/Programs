        /*
            This function checks whether all the values of array pass a particular 
            condition or not. if any of the element dosen't satisfies the cond.
            then it will return false.
            otherwise it returns true
        */

var ary  = [2,4,6,8,1];
function check_even(no) {
    return no % 2 == 0;
}
var bool = ary.every(check_even);
if(bool ==  true) 
    console.log("The whole array is even.");
else 
    console.log("The whole array is not even.");
