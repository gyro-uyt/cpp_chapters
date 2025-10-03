/*
Create a buisness name generator, by combining list of adjectives, shop names and another word

Adjective:
    Crazy
    Amazing
    Fire

Shop name: 
    Engine 
    Foods
    Garments

Another word:
    Bros 
    Limited
    Hub
*/
let random1 = Math.random();
let random2 = Math.random();
let random3 = Math.random();
console.log(random1);
console.log(random2);
console.log(random3);

let adjective;
let shop_name;  
let another_word;

if (random1 < 0.3) {
  adjective = "Crazy ";
} else if (random1 < 0.6) {
  adjective = "Amazing ";
} else if (random1 < 1) {
  adjective = "Fire ";
}

if (random2 < 0.3) {
  shop_name = "Engine ";
} else if (random2 < 0.6) {
  shop_name = "Foods ";
} else if (random2 < 1) {
  shop_name = "Garments ";
}

if (random3 < 0.3) {
  another_word = "Bros";
} else if (random3 < 0.6) {
  another_word = "Limited";
} else if (random3 < 1) {
  another_word = "Hub";
}

let randomName = adjective + shop_name + another_word;
console.log(randomName);
