            /*  Due to await the function will wait for the promise to get settled and then will
                continue execution...
                                        */
async function x() {
    let promise = new Promise( (resolve) => setTimeout(() => resolve(1),1000) );
    var res = await promise;
    console.log("It waits for 1 sec.... and then shows",res); 
}
x()
                                    