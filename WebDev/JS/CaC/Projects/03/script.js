const clock = document.querySelector("#clock");

// console.log(date);

// This method keeps calling the function again and again indefinetely in specified interval
// setInterval(callback-function, interval); // here interval is in milli-sec
setInterval(() => {
  let date = new Date();
  //   console.log(date.toLocaleTimeString());
  clock.innerHTML = date.toLocaleTimeString();
}, 1000);
