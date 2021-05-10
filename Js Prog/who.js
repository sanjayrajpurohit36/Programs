function whoIsTatti(name) {
  let virat = "fool";

  if (virat === "fool") {
    function whoIsRealTatti(name) {
      return console.log(`${name} is fool`);
    }
    return whoIsRealTatti;
  }
}

let tattiFunctionCall = whoIsTatti("virat");
tattiFunctionCall("xyz");
