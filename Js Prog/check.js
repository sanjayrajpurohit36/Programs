function checkRecurssion(node) {}

function checkNodeValidation(hierarchyLevel) {
    let validate = false;
    var ans;
    for (var i = 0; i < hierarchyLevel.length; i++) {
        {
            console.log("subOrgs inside loop=>", hierarchyLevel);
        }
        validate = false;
        if (hierarchyLevel[i].type !== "input") {
            validate = true;
        } else {
            console.log("coming in else =>", hierarchyLevel[i].type);
            validate = false;
        }
        console.log("level =>", hierarchyLevel[i].level);

        // if (validate) {
            ans = checkNodeValidation(hierarchyLevel[i].subOrgs);
            console.log("ans =>", ans,hierarchyLevel[i].level)
            return validate;
            
            // } else {return false;break;}
        }
        if(ans) return ans; else return false;

    // return ans;
    // if (result && Object.keys(Hierarchy.errorObj).length === 0) return true;
    // debugger;
}

const data = {
    uniqueFieldValue: "DPS Hierarchy",
    admins: [],
    isSelected: false,
    level: 0,
    disable: false,
    type: "node",
    subOrgs: [
        {
            uniqueFieldValue: "North Zone",
            admins: [
                {
                    firstName: "Jaganath",
                    lastName: "",
                },
                {
                    firstName: "Suraj",
                    lastName: "Jain",
                },
            ],
            isSelected: false,
            disable: false,
            level: 1,
            type: "node",
            subOrgs: [
                {
                    uniqueFieldValue: "New Delhi",
                    isSelected: false,
                    disable: false,
                    level: 2,
                    admins: [
                        {
                            firstName: "Suraj",
                            lastName: "Jain",
                        },
                    ],
                    type: "node",
                    subOrgs: [
                        {
                            uniqueFieldValue: "Karol Bagh Branch",
                            isSelected: false,
                            disable: false,
                            level: 3,
                            type: "node",
                            admins: [],
                            subOrgs: [],
                        },
                        {
                            uniqueFieldValue: "GK 1 Branch",
                            isSelected: false,
                            disable: false,
                            level: 3,
                            subOrgs: [],
                            admins: [],
                            type: "node",
                        },
                        {
                            uniqueFieldValue: "Sarita Vihar Branch",
                            isSelected: false,
                            disable: false,
                            level: 3,
                            subOrgs: [],
                            admins: [],
                            type: "node",
                        },
                        {
                            uniqueFieldValue: "Conaught Place Brethurevtut",
                            isSelected: false,
                            disable: false,
                            level: 3,
                            subOrgs: [],
                            type: "input",
                            admins: [],
                        },
                    ],
                },
            ],
        },
        // {
        //     uniqueFieldValue: "East Zone",
        //     isSelected: false,
        //     disable: false,
        //     level: 1,
        //     type: "node",
        //     admins: [],
        //     subOrgs: [
        //         {
        //             uniqueFieldValue: "Rajasthan",
        //             isSelected: false,
        //             disable: false,
        //             level: 2,
        //             type: "node",
        //             subOrgs: [],
        //             admins: [],
        //         },
        //         {
        //             uniqueFieldValue: "Madhya Pradesh",
        //             isSelected: false,
        //             disable: false,
        //             level: 2,
        //             type: "node",
        //             subOrgs: [],
        //             admins: [],
        //         },
        //     ],
        // },
    ],
};

console.log("ans =>", checkNodeValidation(data.subOrgs));