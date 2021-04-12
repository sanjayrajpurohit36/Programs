                    /*
                        In the function total and num parameter are required...
                    */
var arr = [-1,1,2,3];
function sum(total,n) {
    if(n>0)
        return total + n;
}
var res = arr.reduce(sum);
console.log(res);