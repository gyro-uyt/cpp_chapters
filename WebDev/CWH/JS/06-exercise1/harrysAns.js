console.log("This is harry's solution using obj and eval");

let random = Math.random();
console.log(random);

let a = prompt("Enter first number");
let b = prompt("Enter second number");
let operator = prompt("Enter operation to perform");

let obj = {
  "+": "-",
  "*": "+",
  "-": "/",
  "/": "**",
};

if (random > 0.1) {
  // Correct Calculation
  alert(`The result is ${eval(`${a} ${operator} ${b}`)}`); // eval works as calculator
} else {
  // Incorrect Calculation
  operator = obj[operator];
  alert(`The result is ${eval(`${a} ${operator} ${b}`)}`);
}
