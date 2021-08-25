/* 
    What will be the output of this code
*/

const thisObj = {
	thisFunc() {
		const arrowFunc = () => console.log(this);
		arrowFunc();
	},
};

thisObj.thisFunc();

/*
    As the FAT arrow function don't have their own this that's why they 
    reference / inherit "this" from their ancestors or parent.
    Output: thisObj which is
    {thisFunc : [Function: thisFunc]}
*/
