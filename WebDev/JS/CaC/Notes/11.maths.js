console.log(Math);
console.log(Math.abs(-3));
console.log(Math.round(4.5)); // rounds to nearest integer, if .5 then rounds up
console.log(Math.ceil(4.2)); // rounds UP to nearest integer
console.log(Math.floor(4.8)); // rounds DOWN to nearest integer
console.log(Math.min(2, 3, 57, 6, 87, 24));
console.log(Math.max(2, 3, 57, 6, 87, 24));
console.log(Math.sqrt(9)); // square root of 9
console.log(Math.pow(2, 3)); // power of 2 to the power of 3

console.log(Math.random()); // generates a random number between 0 and 1, excluding 1
console.log(Math.random() * 10 + 1); // generates a random number between 1 and 11, excluding 11
console.log(Math.floor(Math.random() * 10) + 1); // generates a random number between 1 and  10, excluding 10

function printRand(times) {
  for (let i = 0; i < times; i++) {
    let a = Math.random() * 10 + 1;
    if (a >= 11) {
      console.log(a.toFixed(2)); // rounds off to 2 decimal places
    }
  }
}

printRand(100);

min = 10;
max = 20;

// Imp.
console.log(Math.floor(Math.random() * (max - min + 1)) + min);
// generates a random number between 10 and 20, excluding 21 and rounds off to nearest integer
