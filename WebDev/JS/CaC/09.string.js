const myName = "Ritik";
const repoCount = 21;

console.log(myName + repoCount + " - old method");

// String Interpolation
console.log(`My name is ${myName} and my repo count is ${repoCount}`); // modern method

// let game = 'GTA';
const game = new String("gta-six"); // this line works same as above

// Accessing string by Value-Pair
console.log(game[0]); // Output: g
console.log(game[1]); // Output: t

console.log(game.__proto__);

console.log(game.length);
console.log(game.toUpperCase());
console.log(game.charAt(1));
console.log(game.indexOf("a"));

const string1 = game.substring(4, 7); // end-index Excluded
console.log(string1);
// negative indices not valid in substring, if given replaced with start/end index

const string2 = game.slice(-6, -2); // end-index Excluded
console.log(string2);
// negative indices are allowed

const usrIp = "      hitesh  ";
console.log(usrIp);
const string3 = usrIp.trim();
// trim() method removes leading & trailing whitespaces/line-terminators Only
console.log(string3);

const url = "https://example.com/pratham%20soni";
// Note: any white-spaces in url is replaced with "%20" (URL encoding)
console.log(url);
console.log(url.replace("%20", "-")); // replace()
console.log(url.includes("com"));

console.log(game.split("-")); // split() method splits a string into array

// See different string methods in Browser's console & check mdn for detailed info
