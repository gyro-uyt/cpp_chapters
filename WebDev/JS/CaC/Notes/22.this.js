const user = {
  username: "Jacky",
  price: 899,

  welcomeMessage: function () {
    console.log(this); // this gives the current context
    console.log(`${this.username}, welcome to the website`); // this.username means username of current context
  },
};

user.welcomeMessage();
user.username = "Ricky";
user.welcomeMessage();

console.log(this); 
// {} empty bcz in our node environment this refers to the current environment context which is empty in global
// but console.log(this) in web's console will give windows as it's context set there

