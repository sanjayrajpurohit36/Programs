// var a = 10;
(function () {
  var a = (b = 3);
  // console.log("inside function", a);
})();
// console.log(a);
console.log(b);
/***************************************************************************/
function createPerson() {
  this.name = "Sanjay";
  this.prof = "Engg.";
  this.introduceUrself = function (city) {
    console.log(`Hi I am ${this.name} from ${city} & I am an ${this.prof}`);
  };
  createPerson.prototype.introduceUrself = function (city) {
    console.log(`Hi I am from {city}`);
  };
}

let object = new createPerson();
object.introduceUrself("Udaipur");

// different program
console.log(2000 + "22"); // output 200022
