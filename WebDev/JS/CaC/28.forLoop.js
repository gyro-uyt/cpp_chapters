// for

for (let i = 0; i < 10; i++) {
  console.log(i);
}
console.log();
//  ctrl+d to select all occurances

// nested loops
for (let i = 0; i < 10; i++) {
  console.log(`Table of ${i}:`);
  for (let j = 1; j <= 10; j++) {
    console.log(`${i} x ${j} = ${i * j}`);
  }
  console.log();
}

let arr = ["flash", "batman", "superman", "wonderwoman"];

for (let index = 0; index < arr.length; index++) {
  const element = arr[index];
  console.log(element);
}
console.log();

// break & continue

for (let i = 0; i < 20; i++) {
  if (i == 4) {
    continue; // skips the particular iteration
  }
  if (i == 8) {
    console.log("Detected 8!");
    break; // breaks the for loop means exists the for loop
  }
  console.log(`vale of i is ${i}`);
}
