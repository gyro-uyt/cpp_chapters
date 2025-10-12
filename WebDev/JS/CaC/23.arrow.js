function wow() {
  console.log(this);
}
wow();
console.log();

function bob() {
  let name = "Jack";
  console.log(this.name); // here, this.name doesn't reflects name defined locally
}
bob();
// Note: this doesn't works with functions it's for object only

// this function
console.log("this function:");
const chai = () => {
  let usrnm = "Sonia";
  console.log(this); // {} empty, no context
};
chai();

// syntax of this function
// () => {} // this thing can be stored in vairable ofcourse

let sum2num = (num1, num2) => {
  return num1 + num2;
};
console.log(sum2num(34, 6));

// Implicit return of arrow fn for one liners (return keyword & braces not required)
let sum3num = (num1, num2, num3) => num1 + num2 + num3; // ✅✅
// let sum3num = (num1, num2, num3) => (num1 + num2 + num3); // ✅, () are ok to use
// let sum3num = (num1, num2, num3) => {num1 + num2 + num3}; // ❌, if {} used then return keyword is required
console.log(sum3num(34, 54, 76));

// Objects with short Arrow fn
// let name = () => (username: "Rocky") // ❌
let naam = () => ({ username: "Rocky" }); // ✅ {} for object declaration and () for short arrow
console.log(naam());

