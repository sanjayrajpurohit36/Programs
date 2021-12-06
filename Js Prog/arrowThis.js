/* 
    What will be the output of this code
*/

const thisObj = {
	thisFunc: function () {
		const arrowFunc = () => console.log(this);
		arrowFunc();
	},
};

thisObj.thisFunc();
console.log(thisObj);

/*
    Key Point: As the FAT arrow function don't have their own "this" that's why they 
    reference / inherit "this" from their ancestors or parent.
    
    Also, here MIP is used Method Invocation Pattern due to which the this inside the 
    FAT arrow function will refer this as whatever is written before "." operator.
    so,
    Output: thisObj which is
    {thisFunc : [Function: thisFunc]}
*/
