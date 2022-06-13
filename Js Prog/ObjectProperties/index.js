/*

It is a safe way to check that propKey is the own property of obj object. 
It is similar to Object.prototype.hasOwnProperty but it supports all object types.

*/

const proto = {
    protoProp: 'protoProp',
  };
  
  const obj = {
    __proto__: proto,
    objProp: 'objProp',
  };
  
  console.log('protoProp' in obj); // output - true.
  console.log(Object.hasOwn(obj, 'protoProp')) // output - false
  console.log(Object.hasOwn(proto, 'protoProp')); // output - true.