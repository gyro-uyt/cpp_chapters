const accId = 224;
let accEmail = "ritik@gmail.com";
// DON'T USE 'var' it's replaced by 'let' due to issues
// it created in block scope & functional scope
var accPass = "3236asd";
accCity = "Gwalior";    // Allowed, but don't use
let accState;   // Uninitialised variables go under undefined

// accId = 2; // Not Allowed
accEmail = "hello@yahoo.com";
accPass = "fuddduBacha";
accCity = "NYC";

// Print
// m-1
console.log("m-1");
console.log(accId);
console.log(accEmail);
console.log(accPass);
console.log(accCity);
console.log(accState);

// m-2
console.log("m-2", accId, accEmail, accPass, accCity,accState);

// m-3
console.table(["m-3", accId, accEmail, accPass, accCity,accState]);
