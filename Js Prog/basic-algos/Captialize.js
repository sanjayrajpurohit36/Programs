//WAP to CAPITALIZE THE FIRST LETTER OF EVERY WORD IN A SENTENCE!

const capitalizeStr = (str) => {
  return str
    .toLowerCase()
    .split(' ')
    .map((st) => st[0].toUpperCase() + st.substr(1))
    .join(' ');
};

const output = capitalizeStr('i love js bruh!');
console.log(output);
