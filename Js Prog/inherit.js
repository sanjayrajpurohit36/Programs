//difference between obj.create and new objname
function Data() {
  this.name = "Sanjay";
}
Data.prototype.from = function () {
  console.log("I am from Rajasthan");
};

Data.prototype.livein = function () {
  console.log("I am living in Bengaluru");
};

console.log("\nUsing new\n");

var x = new Data();
console.log(x.name);
x.from();
x.livein();

console.log("\nObject.create\n");
var y = Object.create(Data.prototype);
console.log(y.name);
y.from();

/* If we use Object.create then we only have access to prototype functions.
But instead of that if we use new operator then we have assess to all.

*/
