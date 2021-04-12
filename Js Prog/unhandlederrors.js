                    /*
                        What happens when errors are not handled...
                        Error:-unhandled rejections
                    */

var promise = new Promise( (resolve, reject) => {
    throw new Error("Whoops page not found!!!");
}).then((res) => {
    console.log("resolved");
}).then((res) => {
    console.log("resolved 2");
});

promise.catch((error)=> {
    console.log(error);
});