// While loop
let index = 0;
while (index < 11) {
  console.log(`value of index is ${index}`);
  index += 2;
}
console.log();

let arr = ["flash", "batman", "superman"];
let i = 0;
while (i < arr.length) {
  console.log(`Value is ${arr[i]}`);
  i++;
}
console.log();

// do-While loop (runs atleast once)
let score = 100;
do {
  console.log(`score is ${score}`);
  score += 2;
} while (score <= 10);
