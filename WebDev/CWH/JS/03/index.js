// we'll run via node
console.log("This can be run through coderunner too!");
console.log("Did you know we can use terminal as tab too!");

let age = 45;
if (age > 18) {
  console.log("You can drive");
} else if (age == 0) {
  console.log("Kiddin?");
} else {
  console.log("You cannot drive");
}

let a = 3;
let b = 2;

console.log(a);
console.log(a + b);
console.log(a - b);
console.log(a * b);
console.log(a / b);
console.log(a ** b); // power
console.log(a % b); // remainder

a += b;
console.log(a);

// REPL (Read Evaluate Print Loop) of JS node can be used by typing node in terminal

// == equal to (compares the value)
// === equal value and type
// !== not equal value or no equal type

console.log(5 === "5"); // false as one in int and other is string
console.log(5 === 5); // true

// && logical and
// || logical or
//  ! logical not

// ternary operation
let u = 1,
  v = -4;
let t = u > v ? u - v : v - u;
console.log("t = " + t);
