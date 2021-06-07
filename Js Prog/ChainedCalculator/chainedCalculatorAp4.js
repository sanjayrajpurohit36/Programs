/***
 * Approach 4 class based solution
 */
class Calculator {
  constructor(initialValue) {
    this.value = initialValue;
  }

  add(a) {
    this.value = this.value + a;
    return this;
  }

  subt(s) {
    this.value = this.value - s;
    return this;
  }

  res() {
    return this.value;
  }
}

let obj = new Calculator(6);
console.log(obj.add(2).subt(5).res());
