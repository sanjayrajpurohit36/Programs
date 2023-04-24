// const { schema } = require("./schema.js");
// import { schema } from "./schema.js";

function addSchemaToLocalStorage() {
  let isSet = setData(schema, "data");
  if (isSet) console.log("data set in localStorahge");
}

window.addEventListener("load", () => {
  addSchemaToLocalStorage();
});

/**
 * Function to show input boxes
 */
function handleInputBox(isShow) {
  let inputWrapper = document.getElementById("task-detail-input-wrapper");
  if (isShow) inputWrapper.style.display = "flex";
  else inputWrapper.style.display = "none";
}

/**
 * Function to create Select according to the given data
 * @param {*}
 * @param {*}
 * @returns
 */
function createSelectOption() {
  let selectElement = document.createElement("Select");
  selectElement.setAttribute("id", "task-status-select");
  // creating options for select element
  let option = document.createElement("option");
  option.setAttribute("value", "In Progress");
  var textNode = document.createTextNode("In Progress");
  option.appendChild(textNode);

  //appending the text node to select Element
  selectElement.appendChild(textNode);

  return selectElement;
}
/**
 * Function to remove all the child nodes of the given parent
 * @param {Node} parent
 */
function removeAllChildNodes(parent) {
  while (parent.firstChild) {
    parent.removeChild(parent.firstChild);
  }
}
/**
 * Function to render the updated list of task
 */
function renderUpdatedList(blockId) {
  let getLsData = getData();
  let taskListObject = getLsData[blockId]["taskList"];
  let block = document.getElementById("inProgress");
  removeAllChildNodes(block);
  let listOfElements = [];
  Object.keys(taskListObject).map((key) => {
    listOfElements.push(
      createTaskElement({
        title: taskListObject[key].title,
        desc: taskListObject[key].desc,
        id: taskListObject[key].id,
      })
    );
  });

  // appending all nodes to the block of inProgress node
  listOfElements.forEach((element) => {
    block.appendChild(element);
  });
}

/**
 * Function to change the status of the task
 * @param {*} event
 */
function changeTaskStatus(event) {
  let taskId = event.target.parentElement.id;
  let blockId = event.target.parentElement.parentElement.id;

  debugger;
  let isSuccess = removeDataFromLs(blockId, taskId, "inprogress");
  if (isSuccess) {
    renderUpdatedList("inprogress");
  }
}

/**
 * Function to create the task element
 * @param {object} elementData
 * @returns
 */
function createTaskElement(elementData) {
  let taskElement = document.createElement("div");
  let headerElement = document.createElement("div");
  let descElement = document.createElement("div");
  // setting the uniqueId for taskElement
  taskElement.setAttribute("id", elementData.id);
  // need to add select element for every infowrapper todo
  while ()
  let statusButton = document.createElement("button");
  statusButton.onclick = changeTaskStatus;
  statusButton.innerHTML = "In Progress";
  statusButton.style =
    "background: blue; color: #232323; border: 1px solid rgb(255, 255, 255); border-radius: 0.3rem; padding: 0.4rem; font-size: 1rem; cursor: pointer;";
  // statusButton.style = JSON.stringify(inProgressBtnStyle);

  taskElement.className = "task-info-wrapper";
  headerElement.innerHTML = elementData.title;
  descElement.innerHTML = elementData.desc;
  taskElement.appendChild(headerElement);
  taskElement.appendChild(descElement);
  taskElement.appendChild(statusButton);
  return taskElement;
}

/**
 * Function to add task info in todo list
 * */
function addTodoTask() {
  var todoBox = document.getElementById("todo");
  var titleInput = document.getElementById("title");
  var descInput = document.getElementById("desc");
  let titleText = titleInput.value;
  let descText = descInput.value;
  let elementData = { title: titleText, desc: descText, id: getUniqueID() }; // object for element data
  // todo need to add data to ls
  addDataToLs("todo", elementData);
  // Creating task element
  let taskElement = createTaskElement(elementData);
  titleInput.value = "";
  descInput.value = "";
  handleInputBox(false);
  todoBox.appendChild(taskElement);
}
