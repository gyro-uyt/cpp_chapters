let arr = [1, 2, 3.141, true, "Omg"];
console.log("Array:", arr); // prints the whole array

// JS Arrays are resizeable and can hold different types of data
arr.push(4); // adds an element to the end of the array
console.log("Array after push:", arr);
arr.pop(); // removes the last element from the array
console.log("Array after pop:", arr);
arr.shift(); // removes the first element from the array
console.log("Array after shift:", arr);
arr.unshift(0); // adds an element to the beginning of the array
console.log("Array after unshift:", arr);

// Array copy operations creates shallow copies, rather than deep copies
// Shallow copy means they are reference to the same memory location
// Deep copy means they do not share the same reference point

let arr1 = [1, 3, 5, 7, 9];
console.log(arr1);
console.log(arr1[0]); // returns the first element of the array

let arr2 = new Array(3, 5, 23, 73, 66);
console.log(arr2.length);

console.log(arr2.includes(5)); // checks if an element is present in the array
console.log(arr2.indexOf(5)); // returns the index of the first occurrence of the element if found, otherwise -1
console.log(arr2.lastIndexOf(73)); // returns the last occurrence of the element if found, otherwise -1

let str1 = arr2.join(); // joins all elements of the array into a String with no separator
let str2 = arr2.join("~ "); // joins all elements of the array into a String with a specified separator
console.log(str1);
console.log(str2);

let arr3 = [1, 2, 3, 4, 5];
console.log("A: ", arr3);

let narr = arr3.slice(1, 3); // returns a new array from start to end (end not included)
console.log(narr);
console.log("B: ", arr3);

let narr2 = arr3.splice(1, 3); // removes elements from start to end (end Included) and returns them as a new array
console.log(narr2);
console.log("C: ", arr3);
