var a = 10;
{
    // legal shadowing
    var a = 100;
    console.log(a); // 100
}

console.log(a); // 100


// Reason: var declarations are declared in global memory space or we can say that var are lexical scoped variables