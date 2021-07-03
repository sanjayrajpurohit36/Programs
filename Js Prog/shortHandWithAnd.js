// Short hand with and &&
let isPrime = true;
const startWatching = () => {
  console.log("Started Watching");
};

if (isPrime) startWatching(); // one way of checking the truth value

isPrime && startWatching(); // shorthand way of checking the truch value
