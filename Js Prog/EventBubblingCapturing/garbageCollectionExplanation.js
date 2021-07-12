/*

     A memory leak occurs when you don't need an object, 
     but the runtime thinks you do and you're unintentionally using memory

    All the variable memory allocations which are not being used in the program which are garbage collected.
    Reference Counts helps indicate when memory is unused then garbage collector collects all that memory.
    
    Algo used: Mark & Sweep

    Consequences of Memory Leak:
    A pretty common symptom of a memory leak is that a page's performance gets progressively worse over time.
    Common Causes of Memory Leak:
        Accidental Global Variables
        Forgotten Timers
        Closures
        Detached DOM trees
        Retaining tree

*/
const someConst = 10;

const obj = {
  val: someConst, // the constant someConst has a reference count of 1
};

const newObj = obj; // the object obj has a reference count of 1

newObj.newVal = someConst; // someConst has a reference count of 2

obj.val = 10;

// Here, someConst loses one reference count
// someConst has a reference count of 1

newObj = {
  foo: "bar",
};

// Here, both someConst and obj lose one reference.
// obj has a reference count of 0
// someConst has a reference count of 0
// Since both have a reference count of 0, they will be garbage collected!
