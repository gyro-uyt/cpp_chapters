// in DOM 'class' are referred as 'className', bcz. in background realname of class are className

document;
// HTMLDocument http://127.0.0.1:3000/CaC/36.html
document.getElementById("first-heading");
// <h1 id="first-heading" class="heading">
document.getElementById("first-heading").id;
// "first-heading"
document.getElementById("first-heading").class;
// undefined
document.getElementById("first-heading").className;
// "heading"
document.getElementById("first-heading").getAttribute;
// function getAttribute()
document.getElementById("first-heading").getAttribute();
// Uncaught TypeError: Element.getAttribute: At least 1 argument required, but only 0 passed
document.getElementById("first-heading").getAttribute("id");
// "first-heading"
document.getElementById("first-heading").getAttribute("class");
// "heading"

// NOTE: this will OVERWRITE ANY PREV. ATTRIBUTES, so specify the old ones too!
// document.getElementById("first-heading").setAttribute("class", "test"); // ❌
document
  .getElementById("first-heading")
  .setAttribute("class", "heading", "test"); // ✅ specifying old attribute heading also
// undefined

const h1 = document.getElementById("first-heading");
// undefined

h1;
// <h1 id="first-heading" class="heading">
h1.style.backgroundColor = "green";
// "green"
h1.style.padding = "5px 15px";
// "5px 15px"
h1.style.borderRadius = "10px";
// "10px"

// What's the difference, adding <span>span-text</span> in <h1> to find out
h1.textContent;
// "DOM Learnings"
h1.innerHTML;
// "DOM Learnings"
h1.innerText;
// "DOM Learnings"

// after adding span in h1, now difference is clear
h1.innerText;
// "DOM Learnings"
h1.textContent;
// "DOM Learnings span-text"
h1.innerHTML;
// 'DOM Learnings <span style="display: none">span-text</span>'

// querySelector

// Note: querySelector ONLY SELECT FIRST MATCH, querySelector follows JQuery syntax which follows same CSS syntax, hence following CSS-Selectors
document.querySelector("h2");
// <h2>

document.querySelector("#first-heading");
// <h1 id="first-heading" class="heading">
document.querySelector(".heading");
// <h1 id="first-heading" class="heading">
document.querySelector('input[type="password"]');
// <input id="" type="password" name="">

const myUl = document.querySelector("ul");
// undefined
myUl.querySelector("li").style.backgroundColor = "grey";
// "grey"
myUl.querySelector("li").style.borderRadius = "14px";
// "14px"
myUl.querySelector("li").style.borderRadius = "6px";
// "6px"
myUl.querySelector("li").style.padding = "3px 10px";
// "3px 10px"
myUl.querySelector("li").innerText = "five";
// "five"

// querySelectorAll
// It is like array but NOT AN ARRAY, as it has foreach but no map and many other methods

const tempLiList = document.querySelectorAll("li");
// undefined
tempLiList;
// NodeList(3) [ li, li, li ]
tempLiList.style.color = "green";
// Uncaught TypeError: can't access property "color", tempLiList.style is undefined
tempLiList[0].style.color = "green"; // you need to manually select this
// "green"

const myH1 = document.querySelectorAll("h1");
// undefined
myH1;
// NodeList [ h1#first-heading.heading ]

myH1.style.color = "green"; // ❌
// error
myH1[0].style.color = "green"; // ✅
// "green"

// foreach available
tempLiList.forEach((l) => (l.style.backgroundColor = "green"));

// to use map on NodeList convert it into array first

// HTMLCollection (different from NodeList and arrays)
const tempClassList = document.getElementsByClassName("list-item");
// undefined
tempClassList;
// HTMLCollection { 0: li.list-item, 1: li.list-item, 2: li.list-item, 3: li.list-item, length: 4 }

// CONVERSION OF HTMLCollection/NodeList int ARRAY
const myConvertedArray = Array.from(tempClassList);
// undefined
myConvertedArray;
// Array(4) [ li.list-item, li.list-item, li.list-item, li.list-item ]
myConvertedArray.forEach((l) => (l.style.color = "orange"));
// undefined
