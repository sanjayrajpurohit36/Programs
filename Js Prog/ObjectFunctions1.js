/*
    Topic: Object.assign(targetObject, OriginalObject)

    What will be the output of the following code

    Learning: Object.assign() creates a shallow copy of the object, so if there is 
    nested object in your original object that will reflect the change you do in the
    copied object.
*/

let original = {
    name : 'Sam'
}
  
let copy = Object.assign({}, original);

copy.name = "Max";
copy.age = 21;

// console.log("=>",original) // Original object doesn't get affected
// console.log("=>",copy) // only copied object gets affected



// ====================================================================================== //

let org = { name: "Sam", age: 22}
let cpy = Object.assign({age: 21, place: "New York"}, org)

// console.log("=>", org)
// console.log("=>", cpy)
/* 
    Output : In this case the keys "age" & "place" will be present the new created object 
    which is cpy
*/

// ======================================================================================= //

let student = { 
    name : "Sam",
    details : {
        age: 21,
        city: "Boston",
        sex: "Male"
    }
}

let copyStudent = Object.assign({}, student)
copyStudent.details.age = 55;
console.log("student: ", student);
console.log("\ncopyStudent: ", copyStudent);
/* 
    So, if we use Object.assign then it might create issue for us while building any application
    Now what should we do to avoid it.
*/

// Solution to above mentioned issue
console.log(" \n\n ************ Solution ************ \n\n")

let studentDetails = { 
    name : "Sam",
    details : {
        age: 21,
        city: "Boston",
        sex: "Male"
    }
}
let newStudentDetails = JSON.parse(JSON.stringify(student)); 
// now with this case the original object is safe even if we do make change to any property in the new copied object
newStudentDetails.details.age = 55;
console.log("studentDetails (original object)=> There is no change in the original object even if we modify the copied object : \n", studentDetails)
console.log("\nnewStudentDetails (copied object)=> ", newStudentDetails)


