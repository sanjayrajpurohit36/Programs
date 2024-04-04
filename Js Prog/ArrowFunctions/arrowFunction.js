/*
    What is the output of the following code
    Concept: Arrow Functions
    "this" keyword in arrow functions
    IMP
*/

const x = () => {
  console.log(this.name);
};

x.call({ name: "max" });

/*

    Note: Always remember arrow functions don't have their own this, they inherit the value
    of "this" from their parent
    
*/
