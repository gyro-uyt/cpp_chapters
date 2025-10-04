console.log(2 >= 1);
console.log(2 > 1);
console.log(2 < 1);
console.log(2 == 1);
console.log(2 != 1);
console.log();

// Ambiguous behaviour
console.log("2" > 1);
console.log("02" > 1);
console.log();

// Ambiguous behaviour
console.log(null > 0); // f
console.log(null == 0); //f
console.log(null >= 0); //t
console.log();
// Reason: == and >,>=,<,<= works differently
// == converts null to a number, treating it as 0

console.log(undefined > 0); // f
console.log(undefined == 0); // f
console.log(undefined >= 0); // f
console.log();

// Strick check (===)
console.log("2" == 2); // t
console.log("2" === 2); // f, check datatypes also
console.log("2" === "2"); // t
