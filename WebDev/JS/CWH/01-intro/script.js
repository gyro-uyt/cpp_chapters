alert("This is main JS");

console.log("Hello world");
console.log("alert ran successfully");
console.log("This is from console.log");

var a = prompt("Enter the value of 'a'");
console.log("User entered " + a);

var isTrue = confirm(
    "Are you sure you want to leave this website and burn your computer"
);
if (isTrue) {
    console.log("Computer is blasting, this is the End...");
} else {
    console.log("You saved your computer from blasting");
}

// elements like prompt/log/etc are present only in browser, 
// hence this script will not be able to run on node as it doesn't recognises those elements

document.title = "Hey, I am good";
document.body.style.backgroundColor = "skyblue"

console.log("This is Webstorm")
