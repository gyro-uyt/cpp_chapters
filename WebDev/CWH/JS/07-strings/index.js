let naam = "Aura marcus";
console.log(naam);

console.log(naam[0]);
console.log(naam[1]);
console.log(naam[2]);
console.log(naam[3]);
console.log(naam[20]); // throws undefined, skips error, as JS is originally made for web it should show errors as low as possible , JS is known as forgiving language

console.log(naam.length);

let my_name = "Jensen Yuang";
let friend_name = "Jissel Lia";

console.log(
  "My name is " +
    my_name +
    " and my buddies name is " +
    friend_name +
    " from Tokyo"
);
console.log(
  `My name is ${my_name} and my buddies name is ${friend_name} from Tokyo`
);

let buddy = "Shivam";
console.log(buddy.toUpperCase());
console.log(buddy.toLowerCase());

console.log(buddy.length);
console.log(buddy.slice(3, 6)); // 3 included, 6 excluded
console.log(buddy.slice(2));
console.log(buddy.replace("Sh", 7727));
console.log(buddy.concat(my_name, "Yash", "Saksham", naam));

// Strings are Immutable these changes doesn't affects the original string

console.log(buddy.startsWith("Shi"));
console.log(buddy.endsWith("van"));
