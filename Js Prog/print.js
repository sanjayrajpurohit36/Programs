function show(text) {
    return new Promise(resolve => {
        console.log(text)
        setTimeout(resolve,0);
    });
}
show('hii').then(()=> console.log('printed using show.....'))