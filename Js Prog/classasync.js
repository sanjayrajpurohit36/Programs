class person {
    async check() {
        return await new Promise((resolve) => (setTimeout( ()=> resolve(1),1000 )));
    }
}

var P = new person;
P.check().then((res) => console.log(res));