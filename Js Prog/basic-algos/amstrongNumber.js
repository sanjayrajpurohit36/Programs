//Javascript algorithm TO CHECK IF THE NUMBER IS AMSTRONG NUMBER OR NOT!

const checkAmstrongNumber = (n) => {
  const number = n.toString().split('');
  let sum = 0;
  let ans;
  number.forEach((numb) => {
    const check = numb * numb * numb;
    ans = sum += check;
  });
  ans === n
    ? console.log('it is an amstrong number!')
    : console.log('it is not an amstrong number!');
};

checkAmstrongNumber(153);
