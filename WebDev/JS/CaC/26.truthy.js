// falsy values:
// false, 0, -0, BigInt 0n, "", null, undefined, NaN

// truthy values:
// All values except the falsy are truth, e.g., "0", 'false', " ", [], {}, function(){}

// Checking Empty Arrays
let userEmail = [];

// Wrong method
if (userEmail) console.log("Got user email");
else console.log("Array is empty");

// Correct method
if (userEmail.length === 0) console.log("Array is empty");
else console.log("Got user email");

// Checking Empty Objects
let emptyObj = {};
if (Object.keys(emptyObj).length === 0) console.log("Object is empty");

// other
console.log(false == 0);
console.log(false == "");
console.log(0 == "");
