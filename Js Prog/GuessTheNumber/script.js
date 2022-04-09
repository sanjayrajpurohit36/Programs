/*We create desired variables to be used in the program*/
var btn = document.getElementById("sub") ;
var numb = document.getElementById("num") ;
var res = document.getElementById("rst");
/*Global variable correctNumber, so that it can be used wherever we want*/
var correctNumber = getRandom() ;
/*These two red dialog boxes will act as warning when we guess low or high.
Here 'red' and 'green' ids are children of id 'show'.*/ 
function redDialog1(){
  var dialog = "<div id='red'>You guessed it low!</div>";
  document.getElementById("show").innerHTML = dialog; 
}
function redDialog2(){
  var dialog = "<div id='red'>You guessed it high!</div>";
  document.getElementById("show").innerHTML = dialog; 
}
/*This green dialog box will tell you when you guess right!*/
function greenDialog(){
  var dialog = "<div id='green'>You guessed it correct!</div>";
  document.getElementById("show").innerHTML = dialog; 
}
/*Printing the correctnumber in console for you to check the correct answer.
You can win if you like inspect element.LOL!*/
console.log(correctNumber) ;
/*btn with event for playgame() function*/
btn.addEventListener("click",()=>{
  playgame() ;
})
/*event for reset game*/
res.addEventListener("click",()=>{
  initgame();
})

/*play game*/
function playgame(){
  let numberGuess = numb.value ;
  displayresult(numberGuess);
}

/*initialize game*/
function initgame(){
  location.reload() ;
  /*geRandom() is again called for new game and new correctNumber.*/
  getRandom() ;
}
/*Function to return a random number everytime a new game starts*/
function getRandom(){
  var random = Math.floor(Math.random()*101) ;
  return random ;
}
/*Logic function to check high,low and correct guesses*/
function displayresult(numberGuess){
   if(numberGuess>correctNumber){
     return redDialog2() ;
   }
   else if(numberGuess<correctNumber){
    return redDialog1() ;
   }
   else{
    return greenDialog();
       }
}
