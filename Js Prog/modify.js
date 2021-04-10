const originalResponse = [
  {
    Grade: 6,
    Subject: "Mathematics",
    Topic: "Points and Lines",
    Students: 2,
    Rank: 1,
  },
  {
    Grade: 6,
    Subject: "Science",
    Topic: "Food: Where Does It Come From",
    Students: 2,
    Rank: 1,
  },
  {
    Grade: 7,
    Subject: "Mathematics",
    Topic: "Angles",
    Students: 2,
    Rank: 1,
  },
  {
    Grade: 7,
    Subject: "Mathematics",
    Topic: "Fractions",
    Students: 1,
    Rank: 2,
  },
  {
    Grade: 7,
    Subject: "Mathematics",
    Topic: "Shapes",
    Students: 1,
    Rank: 2,
  },
  {
    Grade: 7,
    Subject: "Science",
    Topic: "Nutrition in Plants",
    Students: 1,
    Rank: 1,
  },
  {
    Grade: 7,
    Subject: "Science",
    Topic: "Nutrition in Plants",
    Students: 1,
    Rank: 1,
  },

  {
    Grade: 8,
    Subject: "Mathematics",
    Topic: "Real Numbers",
    Students: 1,
    Rank: 1,
  },
  {
    Grade: 8,
    Subject: "Mathematics",
    Topic: "Real Numbers",
    Students: 10,
    Rank: 1,
  },
  {
    Grade: 8,
    Subject: "Mathematics",
    Topic: "Real Numbers",
    Students: 22,
    Rank: 1,
  },
  {
    Grade: 9,
    Subject: "Mathematics",
    Topic: "Real Numbers",
    Students: 2,
    Rank: 1,
  },
];

function modifiedResponse(originalResponse) {
  let modifiedData = [];
  let verifyObj = {};
  originalResponse.map((response) => {
    if (modifiedData && modifiedData.length === 0) {
      let obj = {
        grade: response["Grade"],
        subject: response["Subject"],
        data: {
          categories: [response["Topic"]],
          series: [response["Students"]],
        },
      };
      let pair = {
        [response["Grade"]]: [
          { Subject: response["Subject"], PushedIndex: modifiedData.length },
        ],
      };
      verifyObj = { ...verifyObj, ...pair };
      modifiedData = [...modifiedData, obj];
    } else {
      if (verifyObj.hasOwnProperty(response["Grade"])) {
        let isSubjectMatched = false;
        verifyObj[response["Grade"]].map((item) => {
          if (item["Subject"] === response["Subject"]) {
            isSubjectMatched = true;

            let categories = response["Topic"];
            let series = response["Students"];

            let updatedata = JSON.parse(JSON.stringify(modifiedData));
            updatedata[item["PushedIndex"]].data["categories"] = [
              ...updatedata[item["PushedIndex"]].data.categories,
              categories,
            ];
            updatedata[item["PushedIndex"]].data["series"] = [
              ...updatedata[item["PushedIndex"]].data.series,
              series,
            ];
            modifiedData = JSON.parse(JSON.stringify(updatedata));
          }
        });
        if (!isSubjectMatched) {
          let objData = {
            Subject: response["Subject"],
            PushedIndex: modifiedData.length,
          };
          verifyObj[response["Grade"]] = [
            ...verifyObj[response["Grade"]],
            objData,
          ];
          let obj = {
            grade: response["Grade"],
            subject: response["Subject"],
            data: {
              categories: [response["Topic"]],
              series: [response["Students"]],
            },
          };
          modifiedData = [...modifiedData, obj];
        }
      } else {
        let obj = {
          grade: response["Grade"],
          subject: response["Subject"],
          data: {
            categories: [response["Topic"]],
            series: [response["Students"]],
          },
        };
        let pair = {
          [response["Grade"]]: [
            { Subject: response["Subject"], PushedIndex: modifiedData.length },
          ],
        };
        verifyObj = { ...verifyObj, ...pair };
        modifiedData = [...modifiedData, obj];
      }
    }
  });

  return modifiedData;
}

modifiedResponse(originalResponse);
