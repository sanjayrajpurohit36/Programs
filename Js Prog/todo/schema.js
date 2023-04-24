const schema = {
  todo: {
    title: "Todo",
    status: [
      {
        title: "inProgress",
        color: "Blue",
      },
      {
        title: "done",
        color: "Green",
      },
    ],
    taskList: {},
  },
  inprogress: {
    title: "In Progress",
    status: [
      {
        title: "todo",
        color: "grey",
      },
      {
        title: "done",
        color: "Green",
      },
    ],
    taskList: {},
  },
  done: {
    title: "Done",
    status: [
      {
        title: "todo",
        color: "grey",
      },
      {
        title: "Inprogress",
        color: "Blue",
      },
    ],
    taskList: {},
  },
};
