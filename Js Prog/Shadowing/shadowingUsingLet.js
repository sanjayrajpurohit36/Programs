let b = 20;
{
    // legal shadowing
    let b = 200;
    console.log(b); // 200
}

console.log(b); // 20


// Reason : let and const are blocked scoped