let num1 = [1, 2, 3];
let initialValue = 0;

let total1 = num1.reduce(function (accumulator, currentValue) {
  console.log(`acc: ${accumulator} and currVal: ${currentValue}`);
  return accumulator + currentValue;
}, initialValue);

console.log(total1);
// helpful to find totals in shopping cart, etc.

// Arrow fn
// Syntax: let total2 = num1.reduce(() => (), 0) <== '0' is initialValue
let total2 = num1.reduce((acc, currVal) => acc + currVal, 0);
console.log(total2);

const shoppingCart = [
  {
    itemName: "Js Course",
    price: 2990,
  },
  {
    itemName: "Android Course",
    price: 1500,
  },
  {
    itemName: "DSA Course",
    price: 12990,
  },
  {
    itemName: "C++ Course",
    price: 7590,
  },
];
// Q. find the sum of all these courses
let total3 = shoppingCart.reduce((acc, item) => acc + item.price, 0);
console.log(total3);
