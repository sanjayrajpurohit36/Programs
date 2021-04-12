        /*  map function
        */
var ary  = [2,4,6,0,8,1];
function root() {
    var res = ary.map(Math.sqrt);
    return res;
}
function fr (arr){
    return arr.map(Math.floor);
} 
var wres = root();
console.log("The root of the array without floor function:",wres); 
var result = fr(root());
console.log("The root of the array with floor function:",result); 

var map = new Map([[0,1],[1,2],[2,3]]);
console.log("Map1:",map);

var map2 = new Map([["First_name","Sanjay"],
            ["Last_name","Rajpurohit"],]);
console.log("Map2:",map2);

var map3 = new Map([["whole numbers", [1 ,2 ,3 ,4]], 
            ["Decimal numbers" , [1.1, 1.2, 1.3, 1.4]], 
            ["negative numbers", [-1, -2, -3, -4]]]); 
console.log("Map3:",map3); 