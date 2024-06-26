/*
    What will be the output of this code
*/

const thisObj = {
  thisFunc: function () {
    /*
            Value of "this" object inside the normal function is determined according to the way it's called 
            on line number 17 i.e thisObj. (MIP) is used
        */
    const arrowFunc = () => console.log(this);
    arrowFunc();
  },
  name: "Max",
};

thisObj.thisFunc();
console.log(thisObj);

/*
    Key Point: As the FAT arrow function don't have their own "this" that's why they
    reference / inherit "this" from their ancestors or parent, or we can say that they get their this from their
    enclosing lexical environment

    Also, here MIP is used Method Invocation Pattern due to which the "this" object inside the
    FAT arrow function will refer this as whatever is written before "." operator.
    so,
    
    Output: thisObj which is
    { thisFunc : [Function: thisFunc], name: 'Max' }
*/
