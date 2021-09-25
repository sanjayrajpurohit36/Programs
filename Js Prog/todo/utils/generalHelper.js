function setData(data, key = "data") {
  localStorage.setItem(key, JSON.stringify(data));
  return true;
}

function getData(key = "data") {
  let storageData = JSON.parse(localStorage.getItem(key));
  return storageData;
}

/**
 * Function to return time
 * @returns time
 */
function getUniqueID() {
  let date = new Date();
  let time = date.getTime();
  return time;
}

/**
 * Function to update the LocalStorage data based on arguments
 * @param {string} blockId oneOf(todo,inprogress,done)
 * @param {object} elementData it should contain id, title, desc of task
 */
function addDataToLs(blockId, elementData) {
  //console.log(blockId, elementData.title, elementData.desc);
  let dataStorageObject = {
    title: elementData.title,
    desc: elementData.desc,
  };

  let getLsData = getData("data");
  let divObject = getLsData[blockId];
  let divisionTaskList = Object.assign({}, divObject["taskList"]);
  divisionTaskList[elementData.id] = dataStorageObject;
  divObject["taskList"] = divisionTaskList;

  // updated the data in using the setData helper
  return setData(getLsData); // data added to ls
}

/**
 * Function to reomve task from Ls
 * @param {string} blockId oneOf(todo,inprogress,done)
 * @param {string} elementId // unique element id
 * @param {string} newBlockId
 */
function removeDataFromLs(blockId, taskId, newBlockId) {
  let getLsData = getData("data");

  let newTaskList = Object.assign(getLsData);
  let taskData = newTaskList[blockId]["taskList"][taskId];
  taskData["id"] = getUniqueID();
  delete newTaskList[blockId]["taskList"][taskId];
  debugger;
  if (setData(newTaskList)) {
    return addDataToLs(newBlockId, taskData);
  }
}
