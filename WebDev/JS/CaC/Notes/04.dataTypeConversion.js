let score = "69";
console.log("score: ", typeof score);
// console.log(typeof(score)); // same as above

let valueInNumber = Number(score);
console.log("conversion: ", typeof valueInNumber);
console.log("value:", valueInNumber);

let score1 = "69asf";

let valueInNumber1 = Number(score1);    // for type-conversion use Capital as it's class

console.log("conversion: ", typeof valueInNumber1); // give number
console.log("value: ", valueInNumber1); // NaN (Not a Number, as conversion 69asf in invalid)

let score2 = null;
console.log("score2: ", typeof score2);
console.log("value: ", score2);

let score3 = undefined;
console.log("score3: ", typeof score3);
console.log("value: ", score3);

let score4 = true;
console.log("score4: ", typeof score4);
console.log("value: ", score4);
