let arr1 = ["js", "ruby", "swift", "py", "cpp", "java"];

// arr1.forEach( <write a name-less function here> ) // basically we have to write a callback function inside forEach
arr1.forEach(function (value) {
  console.log(value);
});

// arrow-function in forEach, simple remove name and use parameter as the iterable variable
arr1.forEach((item) => {
  console.log(item);
});

// using function in forEach
function printMe(item) {
  console.log(item);
}
arr1.forEach(printMe); // Give reference to function, don't execute it by putting ()

// forEach loop has other parameters too
arr1.forEach((item, index, arr) => {
  console.log(item, index, arr);
});

// forEach on array containing objects, used very much in DB
arr2 = [
  {
    languageName: "JavaScript",
    languageFileName: "js",
  },
  {
    languageName: "C++",
    languageFileName: "cpp",
  },
  {
    languageName: "Ruby",
    languageFileName: "rb",
  },
];

arr2.forEach((item) => {
  console.log(item.languageName);
});

let arr3 = ["js", "ruby", "swift", "py", "cpp", "java"];

// forEach loop doesn't returns anything
let values = arr3.forEach((item) => {
  return item;
});
console.log(values); // W: undefined, doesn't works

// Hence, filters are used if we want to return something
