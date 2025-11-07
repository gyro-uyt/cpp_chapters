// constructor method
let usr1 = new Object(); // Singleton-object
let usr2 = {}; // same as above but it's an non-singleton object

console.log(usr1);
console.log(usr2);

let usr3 = new Object();
usr3.id = "234kj";
usr3.naam = "Rahul";
usr3.isLoggedIn = false;

console.log(usr3);

let usr4 = {
  email: "hello@yahoo.com",
  // Nested Objects
  naam: {
    realNaam: {
      firstName: "Dhruv",
      lastName: "Mishra",
    },
  },
};

console.log(usr4);
console.log(usr4.naam);
console.log(usr4.naam.realNaam);
console.log(usr4.naam.realNaam.firstName);
console.log(usr4.naam.realNaam.lastName);
console.log();

// Combining objects
let obj1 = { 1: "a", 2: "b" };
let obj2 = { 3: "c", 4: "d" };
console.log("obj1:", obj1);
console.log("obj2:", obj2);

// m-0 (wrong)
let obj3 = { obj1, obj2 }; // Objects will be nested not Combined
console.log("obj3", obj3);

// m-1 (old)
let obj4 = Object.assign(obj1, obj2); // Bad practice, as now obj1 is modified it contains the ans
console.log("obj1:", obj1); // modified the source

let obj5 = Object.assign({}, obj1, obj2); // Best practice beacause it would not change the source object (Obj1)
// empty braces {} acts as target (where this assignment will go) and rest are considered as source
// If not given all will be combined in first object

console.log("obj4", obj4);
console.log("obj5", obj5);

// m-2 (Best)
let bj1 = { 1: "a", 2: "b" };
let bj2 = { 3: "c", 4: "d" };
console.log("bj1", bj1);
console.log("bj2", bj2);

let bj3 = { ...bj1, ...bj2 }; // Spread/glass-shatter method
console.log("bj3", bj3);

// m-3 (array of objs)
let usersObj = [
  {
    id: 1,
    email: "h@gmail.com",
  },
  {
    id: 2,
    email: "k@gmail.com",
  },
];

console.log(usersObj[1].id);
console.log();

//
let tinderUser = {
  id: "123abc",
  name: "Sammy",
  isLoggedIn: false,
};
console.log(tinderUser);

console.log(Object.keys(tinderUser)); // All keys in an array of strings
console.log(Object.values(tinderUser)); // these arrays of strings are very usefull, for iteration, etc in dbms
console.log(Object.entries(tinderUser));

// Checking if properties exits
console.log(tinderUser.hasOwnProperty("isLoggedIn"));
console.log(tinderUser.hasOwnProperty("isLogged"));
