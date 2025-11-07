let mcu = ["Iron Man", "Spider-Man", "Thor", "Hulk"];
let dcu = ["Batman", "Superman", "Wonder Woman", "Flash"];

// mcu.push(dcu); // Adds the entire DCU array as a single element
// console.log(mcu)

// let new1 = mcu.concat(dcu); // Concatenates both arrays into a new one without modifying the original arrays
// console.log(new1);

let new2 = [...mcu, ...dcu]; // Spread operator - Creates a new array by combining elements from multiple arrays
console.log(new2);

let new3 = [
  1,
  2,
  3,
  [7, 2],
  9,
  11,
  [43, 64, 23, [12, 16, 17]],
  74,
  64,
  [36, 64],
];
console.log(new3);
// let new4 = new3.flat(Infinity);
let new4 = new3.flat(2); // Flattens the array up to a specified depth
console.log(new4);

console.log(Array.isArray("YuHuu"));
console.log(Array.from("YuHuu"));
console.log(Array.from({ name: "YuHuu" })); // Interesting
// Whenever Array fails to make arrays it returns empyt array, for this case, u need to specify things

let score1 = 100;
let score2 = 200;
let score3 = 300;
console.log(Array.of(score1, score2, score3));
