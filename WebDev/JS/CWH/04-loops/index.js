console.log("Loops");

/* 
types of loops:
    for loop
    forin loop
    forof loop
    while loop
    do while loop
*/

// for loop
for (let i = 0; i < 10; i++) {
  console.log(i);
}

// forin loop (objects)
let obj = {
  name: "Uday Thakur",
  hobby: "Gaming",
  work: "Coding",
};

for (const key in obj) {
  const element = obj[key];
  console.log(key);
  //   console.log(element);
  //   console.log(key, element);
}

// forof loop (arrays)
for (const c of "Harry") {
  console.log(c);
}

// while loop
let i = 1;
while (i < 5) {
  console.log("i = " + i);
  i++;
}

// do while loop
i = 7;
do {
  console.log("i == " + i);
  i++;
} while (i < 9);
