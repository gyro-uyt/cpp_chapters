#include <iostream>
using namespace std;

// struct is a user-defined data type
struct Student {
  int rn;
  char name[30];
  int marks;
};

int main() {

  int x;
  cout << "Enter the number of students: ";
  cin >> x;
  Student s[x];

  for (int m = 0; m < x; m++) {
    cout << "Enter rn, name, marks of student" << (m + 1) << " : " << endl;
    cin >> s[m].rn >> s[m].name >> s[m].marks;
    cout << endl;
  }

  for (int n = 0; n < x; n++) {
    cout << "\nRoll number of student" << (n + 1) << " is " << s[n].rn << endl;
    cout << "Name of student"          << (n + 1) << " is " << s[n].name << endl;
    cout << "Marks of student"         << (n + 1) << " is " << s[n].marks << endl;
  }

  int sum = 0;
  for (int o = 0; o < x; o++) {
    sum = sum + s[o].marks;
  }
  int avg = sum / x;

  cout << "\nAverage of the student's marks are " << avg << endl;

  return 0;
}

// #include <iostream>
// using namespace std;

// // struct is a user-defined data type
// struct Student {
//   int rn;
//   char name[30];
//   int marks;
// } s1,s2,s3; // s1, s2, s3 is structure variable

// int main() {

//   //Student s1, s2, s3;
//   cout << "Enter rn, name, marks of student1" << endl;
//   cin >> s1.rn >> s1.name >> s1.marks;
//   cout << "Student's rn is " << s1.rn << endl;
//   cout << "Student's name is " << s1.name << endl;
//   cout << "Student's marks is " << s1.marks << endl << endl;

//   cout << "Enter rn, name, marks of student2" << endl;
//   cin >> s2.rn >> s2.name >> s2.marks;
//   cout << "Student's rn is " << s2.rn << endl;
//   cout << "Student's name is " << s2.name << endl;
//   cout << "Student's marks is " << s2.marks << endl << endl;

//   cout << "Enter rn, name, marks of student3" << endl;
//   cin >> s3.rn >> s3.name >> s3.marks;
//   cout << "Student's rn is " << s3.rn << endl;
//   cout << "Student's name is " << s3.name << endl;
//   cout << "Student's marks is " << s3.marks << endl << endl;

//   int average =  (s1.marks + s2.marks + s3.marks)/ 3;
//   cout << "Average of the students marks are: " << average << endl;

//   return 0;
// }