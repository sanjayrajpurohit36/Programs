function howMany(sentence) {
  // Write your code here
  let splitdata = sentence.split(" ");
  let counter = 0;
  splitdata.map((item) => {
    console.log(" ===>", item, item.match(/\d/));
    if (!item.match(/\d/)) {
      counter += 1;
    }
  });
  return counter;
}

console.log("ans=>", howMany("What!!, 1 How are you now?"));
