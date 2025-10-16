// if

if (true) {
  // Code inside this block runs all cool
}

if (false) {
  /* Any part of code inside
    this if block will never
    execute until the
    condition is 
    false
    */
}

// Comparision Operators
// >, <, >=, <=, =, ==, !=, ===, !==

// == only checks the value
if (2 == "2") console.log('Executed for 2 == "2"');
else console.log('Not executed for 2 == "2"');

// === checks for data type also
if (2 === "2") console.log('Executed for 2 === "2"');
else console.log('Not executed for 2 === "2"');

// What's !==

// && -> and
// || -> or

// switch
// Note: 1. switch in JavaScript is for exact value matching, not for ranges or conditions. Use if-else for ranges
//       2. Js uses === in switch cases to match the cases
let month = 2;
switch (month) {
  case 1:
    console.log("January");
    break;
  case 2:
    console.log("Febuary");
    break;
  case 3:
    console.log("March");
    break;

  default:
    console.log("Study hard");
    break;
}
