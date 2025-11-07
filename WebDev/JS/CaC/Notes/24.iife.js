// Immediately Invoked Function Expressions (IIFE)

// 1. It is used to get rid of global scope pollution, i.e., unwanted values of variables that comes from global 
// which we don't want, Means IIFE keeps variables and functions private in it
// 2. It executes immediately

// Named iife
(function chai() {
  console.log("This is a IIFE");
})();
// NOTE: semi-colon ';' after 2nd paranthesis is MUST to STOP the context

// Syntax:
// ()() // 1st () is for function defination and 2nd () is for it's execution

// unnamed/anonymous/simple iife (iife with arrow fn)
(() => {
  console.log("No Name function");
})();

// iife with parameters
((naam) => {
  console.log(`hello, ${naam}`);
})("Jackson");

// W: To write 2 iifes put ';' after ending 1st