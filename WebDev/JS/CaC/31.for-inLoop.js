let obj1 = {
  Js: "JavaScript",
  cpp: "C++",
  SQL: "Structure Query Language",
  rb: "Ruby",
};

// objects are iterable via for-in loops
for (const key in obj1) {
  console.log(`${key} stands for ${obj1[key]}`);
}

// for-in on array
let arr1 = ["js", "ruby", "swift", "py", "cpp", "java"];
for (const key in arr1) {
  console.log(key); // this will print keys of array (0,1,2,3,...)
  console.log(arr1[key]); // this is how to get values of array in for-in loop
}

// for-in on map
let map1 = new Map();
map1.set("IN", "India");
map1.set("US", "United States of America");
map1.set("FR", "France");

for (const key in map1) {
  console.log(key); // W: Prints Nothing, maps are not iterable
}
