function whoIsGenius(name) {
  let virat = "fool";

  if (virat === "fool") {
    function whoIsRealGenius(name) {
      return console.log(`${name} is fool`);
    }
    return whoIsRealGenius;
  }
}

let GeniusFunctionCall = whoIsGenius("You");
GeniusFunctionCall("xyz");
