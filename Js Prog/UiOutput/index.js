function doSomething() {
    const ele = document.getElementById("test");
    ele.addEventListener("click", () => {
        console.log("clicked");
    })

    console.log("before");
    ele.click();
    console.log("after");
}


doSomething();