/*
    WAP to flatten this deep nested object
*/

let obj = {
    a: {
        name: "Glen",
        surname: "Maxwell",
        professionalDetails: {
            country: "Aus",
        },
    },
    b: 23,
    c: {
        game: "cricket",
        o: {
            level: "International",
            arr: [1, 2, 3],
        },
    },
};

function flattenObject(obj, parent) {
    let keyArr = Object.keys(obj);

    let resultObject = {};
    for (let i = 0; i < keyArr.length; i++) {
        let newParent = parent + keyArr[i];
        if (typeof obj[keyArr[i]] == "object") {
            let resObj = flattenObject(obj[keyArr[i]], newParent + ".");
            resultObject = { ...resultObject, ...resObj };
        } else {
            resultObject[newParent] = obj[keyArr[i]];
        }
    }
    return resultObject;
}
console.log(flattenObject(obj, ""));
