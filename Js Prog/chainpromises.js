            //Chain of promises is used to handel the multiple asynchronus tasks.   

new Promise((resolve, reject) =>{
    console.log(3+5);               // task whatever we want to do
    resolve(1);
    // reject("Not executed");
}).then((res)=>  {                  // will be invoked in case of resolve
    console.log("1st then: ",res);
    return 2;
}).then((res) => {   
    console.log("2nd then: ",res);
    return 3;
}).then((res) => {   
    console.log("3rd then: ",res);
    return 4;
}).catch((Error)=> {                // this is invoked only in case of rejection
    console.log(Error);
});