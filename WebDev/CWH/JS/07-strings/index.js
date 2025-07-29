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
