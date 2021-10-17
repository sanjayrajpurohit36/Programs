var btn = document.getElementById("sub") ;
var numb = document.getElementById("num") ;
var res = document.getElementById("rst");
var correctNumber = getRandom() ;

function redDialog1(){
  var dialog = "<div id='red'>You guessed it low!</div>";
  document.getElementById("show").innerHTML = dialog; 
}
function redDialog2(){
  var dialog = "<div id='red'>You guessed it high!</div>";
  document.getElementById("show").innerHTML = dialog; 
}
function greenDialog(){
  var dialog = "<div id='green'>You guessed it correct!</div>";
  document.getElementById("show").innerHTML = dialog; 
}

console.log(correctNumber) ;
btn.addEventListener("click",()=>{
  playgame() ;
})

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
  getRandom() ;
}

function getRandom(){
  var random = Math.floor(Math.random()*101) ;
  return random ;
}
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
//you can check correct answer in the console log.