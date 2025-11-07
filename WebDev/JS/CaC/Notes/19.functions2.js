// Rest operator
function calculateCartPrice(...nums) {
  // here, ... is rest operator
  // Note: this ... is also spread operator, works differently depending on the use-case
  return nums; // returns array of arguements
}

function calculateCartPrice1(val1, val2, ...nums) {
  // first to arguements will be takes by val1, val2 and rest will be combined to nums
  return nums;
}
console.log(calculateCartPrice(200, 400, 235, 500, 2000));
console.log(calculateCartPrice1(200, 400, 235, 500, 2000));

// Objects
let user = {
  username: "Ritik",
  price: 9900,
};
function handleObject(anyObject) {
  console.log(
    `Username is ${anyObject.username} and price is ${anyObject.price}`
  );
}
handleObject(user);

// passing object directly
handleObject({
  username: "Abhay",
  price: 100,
});

// Arrays
let arr = [12, 35, 57, 87];
function return2ndValue(getArray) {
  return getArray[1];
}
console.log(return2ndValue(arr));

// passing array directly
console.log(return2ndValue([34, 456, 6, 8]));
