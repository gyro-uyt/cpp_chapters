let myDate = new Date();
console.log(myDate);
console.log(myDate.toString()); // returns the date and time in a string format
console.log(myDate.toTimeString());
console.log(myDate.toDateString()); // returns the date as a string in the local time zone.
console.log(myDate.toISOString());
console.log(myDate.toJSON());
console.log(myDate.toLocaleDateString());
console.log(myDate.toLocaleTimeString());
console.log(myDate.toLocaleString());
console.log(myDate.getTimezoneOffset()); // returns the difference in minutes between UTC and the local time zone.
console.log(myDate.getUTCFullYear()); // returns the year of the date
console.log(myDate.getUTCMonth()); // returns the month (0-11) of the date
console.log(myDate.getUTCDate()); // returns the day (1-31) of the date
console.log(myDate.getUTCHours()); // returns the hour (0-23) of the date
console.log(myDate.getUTCMinutes()); // returns the minute (0-59) of the date
console.log(myDate.getUTCSeconds()); // returns the second (0-59) of the date
console.log(myDate.getUTCMilliseconds()); // returns the millisecond (0-999)
console.log(myDate.getTime()); // returns the number of milliseconds since January 1, 1970

// NOTE: date/time starts from 0 in JS and it is based on UTC time zone.

console.log(typeof myDate); // object

// here, date dates starts from 0 as in array
let newDate = new Date(2023, 0, 1); // year, month ( 0-11), day (1-31)
console.log(newDate.toDateString());

let newDate1 = new Date(2024, 0, 22, 5, 30, 22); // year, month, day, hour, minute, second
console.log(newDate1.toLocaleString());

let newDate2 = new Date("2025-09-27"); // Note: Dates starts from 1 as it's string
console.log(newDate2.toLocaleString());

let newDate3 = new Date("09-27-2025");
console.log(newDate3.toLocaleString());

// Can be used to found who voted fastest
let timeStamp = Date.now();
console.log(timeStamp); // returns number of ms since January 1, 1970
console.log(newDate3.getTime()); // returns number of ms since January 1, 1970 to newDate3 date and time

console.log(Date.now()); // returns number of ms since January 1, 1970
console.log(Math.floor(Date.now() / 1000)); // returns number of seconds since January 1, 1970

let newDate4 = new Date();
// U can do many customizations here
newDate4.toLocaleString("default", {
  weekday: "long",
});
