let arr3 = ["js", "ruby", "swift", "py", "cpp", "java"];

// forEach loop doesn't returns anything
let values = arr3.forEach((item) => {
  return item;
});
console.log(values); // W: undefined, doesn't works

// filter also takes callback function and it returns the values in it satifying the condition
let arr4 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

let value1 = arr4.filter((num) => num > 4); // ✅ return keyword not needed as this is impicit return
console.log(value1);

let value2 = arr4.filter((nums) => {
  //   nums > 4; // ❌ return keyword in necessary inside scope{}
  return nums > 4;
});
console.log(value2);

// filter workaround in forEach, make a array and push values in it
let value3 = [];
arr4.forEach((num) => {
  if (num > 4) {
    value3.push(num);
  }
});
console.log(value3);

const books = [
  { title: "Book One", genre: "Fiction", publish: 1981, edition: 2004 },
  { title: "Book Two", genre: "Non-Fiction", publish: 1992, edition: 2008 },
  { title: "Book Three", genre: "History", publish: 1999, edition: 2007 },
  { title: "Book Four", genre: "Non-Fiction", publish: 1989, edition: 2010 },
  { title: "Book Five", genre: "Science", publish: 2009, edition: 2014 },
  { title: "Book Six", genre: "Fiction", publish: 1987, edition: 2010 },
  { title: "Book Seven", genre: "History", publish: 1986, edition: 1996 },
  { title: "Book Eight", genre: "Science", publish: 2011, edition: 2016 },
  { title: "Book Nine", genre: "Non-Fiction", publish: 1981, edition: 1989 },
];

// find history books
let search = books.filter((bk) => bk.genre === "History");
console.log("History:\n", search);

// find books published after 2000
search = books.filter((bk) => bk.publish >= 2000);
console.log("Published after 2000:\n", search);

// find history books published after 1995
search = books.filter((bk) => bk.genre === "History" && bk.publish >= 1995);
console.log("History Book Published after 1995:\n", search);
