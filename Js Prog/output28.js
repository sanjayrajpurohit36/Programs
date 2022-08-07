/*
    What will be the output of the following code & why?
*/

function outer(value) {
    inner();
    if (value > 1) {
        function inner() {
            console.log("inner function call");
        }
    }
    inner();
}

outer(2);

/*
    inner(); at line no 6 will throw an error that inner is not defined as
    condition is not checked and function inner() is not even present in the current lexical scope
    so, that's why this code will throw an error "inner is not a function".

    If we comment line no 6 after the condition is checked as (true) then at line no 13 inner() call will
    work as now the inner function will be present in the current scope.

*/
