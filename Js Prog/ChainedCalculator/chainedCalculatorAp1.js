/***   Chained Calculator Approach 1  ***
    In this approach we will use the this object & will add all the functions to that object
    the drawback of this approach is only that we're polluting the global this object of the JS.
*/
function calc(initialValue = 2) {
  // accumulator
  var result = initialValue;
  console.log("checking if global is equals to this", global == this);
  //to prove that we're polluting the global this object,this will return true
  this.add = function (a) {
    //Note:- here we can create normal functions as well
    result += a;
    return this;
  };
  this.subt = function (a) {
    result -= a;
    return this;
  };
  this.res = function () {
    return result;
  };
  return this;
}

console.log(
  "result of chained calc is: =>",
  calc(2).add(2).add(2).subt(6).res()
);
