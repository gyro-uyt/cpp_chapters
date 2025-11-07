// Nested functions
function one() {
  const usrnm = "Ritik";

  function two() {
    const website = "youtube";
    console.log(usrnm); // scope ke bhaar vaali values use kr skte but not vice-versa
  }
  // console.log(website); E: Cannot access website as it is not in scope

  two();
}

one();

// Types of function declaration (Hoisting):

// m-1 (Normal)
addOne(34); // ✅✅ we can call the function before declaring it, provided it's declared afterwards
function addOne(num) {
  return num + 1;
}
console.log(addOne(4)); // ✅

// m-2 (Storing fn in a variable)
// addTwo(69); // ❌❌❌ in variable function we cannot call the function before declaring it
const addTwo = function (num) {
  return num + 2;
};
console.log(addTwo(6)); // ✅
