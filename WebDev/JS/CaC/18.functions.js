function greet() {
  console.log("Hello user, how are you?");
}

greet; // reference to the function
greet(); // () tells execute this function

function sum2num(num1, num2) {
  // here num1, num2 are parameters
  console.log(num1 + num2);
}

sum2num();
sum2num(23, 54); // here 23, 54 are arguements
sum2num(23, "54"); // follows appropriate type consersion rules
sum2num(23, "a");
sum2num(23, null);
// to prevent these bizzare additions, we can set checking in function

// We can store the function in variable like this
let result = sum2num(3, 6); // but this will not store value are we are printing the output not returning
console.log("result: ", result);

function sub2num(num1, num2) {
  return num1 - num2; // returns the value
  // Note: Any code written after return is unaccessible
}

let result1 = sub2num(7, 4);
console.log(result1);

function loginMsg(usrnm) {
  if (!usrnm) {
    console.log("Enter a username!");
    return;
  }
  // same as below
  //   if (usrnm === undefined) {
  //     console.log("Enter a username!");
  //     return;
  //   }
  return `${usrnm}, just logged in`;
}
console.log(loginMsg());
console.log(loginMsg("Pratham"));

// Default Parameters, no case of undefined 
function msg(usrnm = "King") {
  return `${usrnm}, just logged in`;
}
console.log(msg())
console.log(msg("Rakesh"))
