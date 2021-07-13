document.querySelector("#grandparent").addEventListener("click", () => {
  console.log("Grandparent Clicked!!!");
});

document.querySelector("#parent").addEventListener("click", () => {
  console.log("Parent Clicked!");
});

document.querySelector("#child").addEventListener("click", () => {
  console.log("Child Clicked!");
});
