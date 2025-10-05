// auto assignment to Int
const score = 69;
console.log(score);
console.log(typeof score);

// using constructor to create number object
const balance = new Number("540");
console.log(balance);
console.log(typeof balance);

// Converts to String, now string methods can be used
console.log(balance.toString().length);

// used to get numbers with fixed decimal places, eg: bill-calculations
console.log(balance.toFixed(2));

const num1 = 12.4342;
console.log(num1.toPrecision(4)); // rounds off to 4 digits
const num2 = 312.4342;
console.log(num2.toPrecision(4)); // doesn't see decimals or ints just rounds off
console.log(num2.toPrecision(2)); // rounds off to 2 digits => 3.1e+2, converted to exponential


