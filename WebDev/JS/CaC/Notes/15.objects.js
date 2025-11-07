// Singleton
// if object is made via constructor -> signleton
// if object is made via literals -> not singleton

// symbol
let sym1 = Symbol("Key1");
let sym2 = Symbol("Key2");

// Object literals
let obj1 = {
  // key: value     // Note: key is assumed as string, "" are optional for key, value can be anything string, int, bool, array, etc
  naam: "Ritik",
  "full naam": "Ritik Kumar",
  age: 21,
  location: "Delhi",
  isLoggedIn: false,
  lastLoginDays: ["Monday", "Wednesday"],
  sym1: "myValue1", // despite sym1 being a Symbol, it is used here as a String Not a Symbol
  [sym2]: "myValue2", // Symbols should be in square braces for to use as key
};

// Accessing objects

// m-1
console.log(obj1.location);

// m-2
// console.log(obj1[email])     // Need to be given as string, as behind the scenes key is stored as string
console.log(obj1["naam"]); // This method is usefull when key has white spaces in it
console.log(obj1["full naam"]); // This can only be accessed with m-2

console.log(obj1.sym1); // Incorrect for Symbols
console.log(obj1[sym2]); // Correct for symbols

// Freeze method
console.log(obj1.isLoggedIn);

obj1.isLoggedIn = true;
console.log(obj1.isLoggedIn);

// Prevents the modification of existing property attributes and values, and prevents the addition of new properties
Object.freeze(obj1);
obj1.isLoggedIn = false;
console.log(obj1.isLoggedIn);
// Note: after freeze you cannot add/remove anything from object, that's why new obj2 is taken below

// Adding functions in object
let obj2 = {
  naam: "Bulla",
  age: 21,
  city: "Gwalior",
};

obj2.greeting = function () {
  console.log("Welcome back AristoCrats");
};
obj2.greetUsr = function () {
  // Using naam from the object
  console.log(`Welcome back, ${obj2.naam}`);
  console.log(`Welcome back, ${this.naam}`);    // better
};

console.log(obj2.greeting); // prints Function reference
console.log(obj2.greeting());

console.log(obj2.greetUsr());

// Constructor method
// Object.create();
