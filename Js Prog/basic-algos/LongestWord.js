//Javascript algorithm TO FIND THE LONGEST WORD IN AN ARRAY!

const longestWord = (arr) => {
  let word = '';
  arr.forEach((a) => {
    if (word.length < a.length) {
      word = a;
    }
  });
  console.log(word.length);
};

longestWord(['javascript', 'react', 'css']);
