/*  
Create a faulty calculator using js.
    This faulty calculator does following :
        1.It takes two numbers as input from the user.
        2.It performes wrong operations as follows:
            + ---> -
            * ---> +
            - ---> /
            / ---> **
    it performs wrong operator 10% of the times
*/

function calculator(a, operator, b) {
  if (operator == "+") {
    if (Math.random() > 0.1) {
      return a + b;
    }
    return a - b;
  } else if (operator == "*") {
    if (Math.random() > 0.1) {
      return a * b;
    }
    return a + b;
  } else if (operator == "-") {
    if (Math.random() > 0.1) {
      return a - b;
    }
    return a / b;
  } else if (operator == "/") {
    if (Math.random() > 0.1) {
      return a / b;
    }
    return a ** b;
  } else if (operator == "**") {
    return a ** b;
  } else if (operator == "%") {
    return a % b;
  }
}

c = calculator(100, "-", 50);
console.log(c);
console.log("hello")