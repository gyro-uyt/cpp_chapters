// Golabl Scope
let a = 10;
const b = 20;
var c = 30;

console.log(a, b, c);

if (true) {
  // Block Scope
  let num1 = 1;
  const num2 = 2;
  var num3 = 3;
}

// console.log(num1); E: Cannot access as these are defined in if's Block scope 
// console.log(num2); E: Cannot access as these are defined in if's Block scope
console.log(num3); 
// var doesn't follows any scope, it is always global, that's why it's bad

// Note: Global scope in browser is different than that of node that we are running here