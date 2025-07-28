function greet(name) {
  console.log("Hey, " + name);
  console.log("Hey, " + name + " you're wearing nice shirt today");
  console.log("Sir " + name + " have a greet evening\n");
}

greet("Uday");
greet("Archit");
greet("Pratham");

function sum(a, b, c = 3) {
  // 'c' is default parameter
  // console.log(a + b);
  return a + b;
}

result = sum(3, 4);
console.log("The sum of these numbers is: ", result);

// Arrow function
const func1 = (x) => {
  console.log("This is an arrow function, " + x);
};
// variable as well as function, function can be oassed into another function 
func1(34);
func1(87);
func1(98);
