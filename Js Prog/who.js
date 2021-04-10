function whoIsTatti(name) {
  let virat = "tatti";

  if (virat === "tatti") {
    function whoIsRealTatti(name) {
      return console.log(`${name} is tatti`);
    }
    return whoIsRealTatti;
  }
}

let tattiFunctionCall = whoIsTatti("virat");
tattiFunctionCall("xyz");
