let num1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

// map method accepts callback function, it returns automatically, similar to filter
let ans1 = num1.map((num) => num + 10);
console.log(ans1);

// maps do not support conditions those are for filter
// maps speciality is chaining

let ans2 = num1
  .map((num) => num * 10)
  .map((num) => num + 1)
  .filter((num) => num >= 45);
console.log(ans2);

// map executes from left to right
