// Nullish Coalescing Operator (??)
// It is for null & undefined values
// If we get null/undefined values use this value or do this

let val1;

val1 = 5 ?? null;
val1 = null ?? 10;
val1 = undefined ?? 15 ?? 20;

console.log(val1);


// Ternary Operator (different from ??)
// Shorthand of if-else

// Syntax: 
// condition ? true : false

price = 110;
price <= 80 ? console.log("Less than 80") : console.log("Greater than 80");
