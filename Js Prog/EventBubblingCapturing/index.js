// useCapture is the (flag / Key) used to control that whether Bubbling will happen or Trickling.

let useCapture = true;
document.querySelector("#grandparent").addEventListener("click", () => {
  console.log("Grandparent Clicked!!!");
}, useCapture);

document.querySelector("#parent").addEventListener("click", () => {
  console.log("Parent Clicked!");
}, useCapture);

document.querySelector("#child").addEventListener("click", () => {
  console.log("Child Clicked!");
}, useCapture);
