let levelCheck = 0;
function checkNodeValidation(stack, hierarchyLevel) {
  let errorObj = false;
  for (var i = 0; i < hierarchyLevel.length; i++) {
    if (hierarchyLevel[i].type === "node" && errorObj === false) {
      if (levelCheck == 0 && hierarchyLevel[i].level == 3) {
        levelCheck = 1;
      }
      stack.push(true);
    } else stack.push(false);
    checkNodeValidation(stack, hierarchyLevel[i].subOrgs);
  }
  console.log("stack=>", stack, stack.indexOf(false), stack.length, levelCheck);
  if (stack.length > 0 && levelCheck == 1) {
    if (stack.indexOf(false) >= 0) {
      console.log("false found");
      return false;
    } else {
      console.log("no false found");
      return true;
    }
  } else {
    console.log(
      "stack is empty or levelCheck is false",
      stack.length,
      levelCheck
    );
    return false;
  }
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
          ],
          //   subOrgs: [
          //     {
          //       uniqueFieldValue: "Karol Bagh Branch",
          //       isSelected: false,
          //       disable: false,
          //       level: 3,
          //       type: "node",
          //       admins: [],
          //       subOrgs: [],
          //     },
          //     {
          //       uniqueFieldValue: "GK 1 Branch",
          //       isSelected: false,
          //       disable: false,
          //       level: 3,
          //       subOrgs: [],
          //       admins: [],
          //       type: "node",
          //     },
          //     {
          //       uniqueFieldValue: "Sarita Vihar Branch",
          //       isSelected: false,
          //       disable: false,
          //       level: 3,
          //       subOrgs: [],
          //       admins: [],
          //       type: "node",
          //     },
          //     {
          //       uniqueFieldValue: "Conaught Place Brethurevtut",
          //       isSelected: false,
          //       disable: false,
          //       level: 3,
          //       subOrgs: [],
          //       type: "node",
          //       admins: [],
          //     },
          //   ],
        },
      ],
    },
    {
      uniqueFieldValue: "East Zone",
      isSelected: false,
      disable: false,
      level: 1,
      type: "node",
      admins: [],
      subOrgs: [
        {
          uniqueFieldValue: "Rajasthan",
          isSelected: false,
          disable: false,
          level: 2,
          type: "node",
          subOrgs: [],
          admins: [],
        },
        {
          uniqueFieldValue: "Madhya Pradesh",
          isSelected: false,
          disable: false,
          level: 2,
          type: "node",
          subOrgs: [],
          admins: [],
        },
      ],
    },
  ],
};

console.log("ans =>", checkNodeValidation([], data.subOrgs));
