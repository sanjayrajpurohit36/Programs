//copyWithin(target, start, end)
var fruits = ["Banana", "Orange", "Apple", "Mango"];
console.log(fruits.copyWithin(2, 0));

// each entry will have key-value pair, based on the array values. 
console.log("\n");
var fr = fruits.entries();
fruits.forEach( (element,index) => {
    console.log(index,element);    
});