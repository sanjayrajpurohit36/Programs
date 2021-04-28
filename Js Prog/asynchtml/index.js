async function callAPI() {
  // wrapped the API call code in async and await
  let jsonData;
  try {
    console.log("Inside call API");
    let response = await fetch(
      "https://jsonmock.hackerrank.com/api/transactions"
    ); // this will return a promise to the function which will call this callAPI function check in console
    jsonData = await response.json(); // this also returns a promise
    console.log("After data is fetched");
    console.log("data after api call", jsonData);
  } catch (e) {
    console.log("if any error occurs then control will come here");
  }

  return jsonData;
}

// this function will call the async function
function showResult() {
  console.log("Show result is called");
  let resp = callAPI();
  console.log("resp =>", resp);
  resp.then((data) => {
    console.log("data from api returned in promise", data);
  });
  console.log("fetching the results... wait controller returned");
}
