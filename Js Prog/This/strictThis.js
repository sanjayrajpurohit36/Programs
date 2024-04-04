"use strict";

function x() {
  console.log(this);
}

x(); // undefined

window.x(); // window object
