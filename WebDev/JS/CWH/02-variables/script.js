console.log("This is Console");

var a = 2;
var b = 13;
var c = "This is a string";
var _d = "Harry";
var e = 23.231;
// var 2e = 23; // Not allowed

const h = 24; // value cannot be changed
// h+=3;  // Not allowed

console.log(a + b);
console.log(typeof a, typeof b, typeof c, typeof e);

// Use 'let' instead of 'var' as 'let' has block scope and 'var' has global scope
let p = 23;
let q = "uday";
let r = 3.14;
const s = true;
let t = undefined;
let u = null; // why is typeof null a object?

console.log(p, q, r, s, t, u);
console.log(typeof p, typeof q, typeof r, typeof s, typeof t, typeof u);

console.log("Bravo");

let obj = {
  name: "david putra",
  "job code": 5600,
  is_handsome: true,
};  // use "" when there's a space in name

console.log(obj);
obj.salary = "100 crores";
console.log(obj);
