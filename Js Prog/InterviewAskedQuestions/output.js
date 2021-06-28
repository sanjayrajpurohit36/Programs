/*
  Commonly asked JS questions and their output with reason.
*/
for (var i = 0; i < 10; i++) {
  setTimeout(() => {
    console.log(i);
  });
}
/* 
  Output: 10 times 10
  Reason: As we have used var in declaring the variable i so the same instance of 
  i will be shared/assigned with every instance of setTimeout so the firstly the loop will complete 
  so, then the value of i will become 10 then every callback of setTimeout will get invoked.
*/

for (let i = 0; i < 10; i++) {
  setTimeout(() => {
    console.log(i);
  });
}
/* 
  Output: 0-9
  Reason: As we have used let (block scope) in defining the variable i so everytime new value will be
  shared/assigned with every new instance of setTimeout, as a result of that 0-9 will be printed.
*/
