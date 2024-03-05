const a = 10;
{ // legal shadowing
    const a = 100;
    console.log(a); // 100
}
console.log(a); // 10
//Reason: let and const are blocked scoped