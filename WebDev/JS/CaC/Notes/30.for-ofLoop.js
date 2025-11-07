// array & object are very powerfull in JS they can contain anything
// for eg. array can also contains objs like [{}, {}, {}];

let arr1 = [1, 2, 3, 4, 5];

// for-of loop, can be apllied on anything strings, arrays, objects, etc.
for (const i of arr1) {
  console.log(i);
}

let greetings = "Hello, master";
for (const greet of greetings) {
  if (greet == " ") continue;
  console.log(`Each char is ${greet}`);
}

// Maps (similar to arrays) (map is an Obj, everything in JS is object)
// Map object holds key-value pairs & remembers the original insertion order of the keys
// Map hold only unique values

let map1 = new Map();
map1.set("IN", "India");
map1.set("US", "United States of America");
map1.set("FR", "France");
map1.set("IN", "India"); // Not registers, only Unique values allowed

console.log(map1); // displays in order of additions of key-value

// for-of loop on map
for (const key of map1) {
  //   console.log(key);
  //   console.log(key[0]);
  console.log(key[1]);
}

// de-structring array to hold differemt values of map
for (const [key, value] of map1) {
  console.log(key, ":-", value);
}

// for-of loop on object does NOT WORKS
let games = {
  game1: "NFS",
  game2: "RDR2",
  game3: "Forza 5",
  game4: "RE:08",
};
// for (const [key, value] of games) {
//   console.log(key, ":-", value); // E: objects are not iterable in case of for-of loop
// }
