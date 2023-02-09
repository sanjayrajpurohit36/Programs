/*
    What will be the output of the following program.
    Concept: Promise, then block, finally block, Task Queue
*/

let fetchData = function () {
    return new Promise((resolve) => resolve("Hi"))
}

let isLoading = false;
fetchData()
    .then((res) => {
        console.log("\n**Inside Then Block**\n")
        console.log(res)
    })
    .finally(() => {
        console.log("\n**Inside Finally Block**\n")
        isLoading = true;
    })

console.log(isLoading)
fetchData();