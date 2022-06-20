/*
    What will be the output of the below code
*/

function check(val) {
    if (val === 20);
    {
        return true;
    }
    return false;
}

console.log(check(10));

/*
    Reason: Output: true
    as having ';' after the condition check will make the return false; an unreachable code, because semicolon after
    condition check will make it a statement so return true; will get executed irrespective of whether the condition
    is true or false.
*/