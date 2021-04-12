            /*  For strings this sort function will sort according to ACII values
                of strings.
                For numbers it will sort normally.    
                    */ 
function nsort(a,b) {
    return b-a;
}
var fruits = ["Apple","Mango","Banana","mango","banana"];
var num = ["1","3","2","15","60"];
var num1 = [0,5,45,76,6,];
console.log("Sorted array: ",fruits.sort());
console.log("Sorted stringed num values: ",num.sort());
console.log("Sorted num values: ",num1.sort(nsort));
