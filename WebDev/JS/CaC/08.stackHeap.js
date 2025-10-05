// Stack <- Primitive <- Copy
// Heap <- Non-Primitive <- Original

let myName = "Ritik";

let otherName = myName;
otherName = "Hero";

console.log(myName); // change in otherName didn't affected
console.log(otherName);

let usr1 = {
  email: "ritik@gmail.com",
  upi: "user@ybl",
};

let usr2 = usr1;
usr2.email = "prince@gmail.com";

console.log(usr1.email); // changes are reflected
console.log(usr2.email);
