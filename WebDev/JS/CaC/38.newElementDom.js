// querySelector is expensive that's why tricks like traversing (child,parent,etc.) are used

const parent = document.querySelector(".parent");
// parent -> children
console.log(parent);
console.log(parent.children); // children method
console.log(parent.children[2]);
console.log(parent.children[2].innerHTML);

for (let i = 0; i < parent.children.length; i++) {
  console.log(parent.children[i].innerHTML);
}

parent.children[1].style.color = "orange";

console.log(parent.firstElementChild);
console.log(parent.lastElementChild);

// children -> parent
const day1 = document.querySelector(".day");
console.log(day1.parentElement);

// children -> children (sibling)
console.log(day1.nextElementSibling);
console.log(day1.nextElementSibling.nextElementSibling);
