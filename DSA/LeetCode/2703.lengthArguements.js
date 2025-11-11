var argumentsLength = function (...args) {
  return args.length;
};

let ar = [1, 34, 564, 32, 3.234, "34", "g", {}, { 2: "32" }, () => {}];

console.log(argumentsLength(ar)); // it returns the lenght of arguements as here the only arguement is 'ar' so it outputs '1'
console.log(
  argumentsLength(1, 34, 564, 32, 3.234, "34", "g", {}, { 2: "32" }, () => {})
);
