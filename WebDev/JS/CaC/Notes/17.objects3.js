// {de-structuring Object} (destructuring of array is also possible)

let course = {
  courseName: "JS in hindi",
  price: "999",
  courseInstructor: "Rakesh",
};

console.log(course.courseInstructor);

// for frequently used items, we can do this
let { courseInstructor } = course;
console.log(courseInstructor);

// or we can give them short name too
let { courseInstructor: instructor } = course;
console.log(instructor);

// Remember: {} are for destructuring

// JSON API
// JSON === JavaScript Object Notation

// JSON is Object without name, directly use {} and uses "" for keys also
// {
//     "name": "hitesh",
//     "courseName": "JS in hindi",
//     "price": 999,
//     "isLoggedIn": false
// }

// Sometimes APIs might be like this
[
    {},
    {},
    {}
]