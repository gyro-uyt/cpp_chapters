#include <iostream>
using namespace std;

struct employee
{
    /* data */
    int employeeid;
    char favalphabet;
    double salary;
};

typedef struct student        // 'typedef' means instead of writing "struct students", we can write a single word, which is the word after {}
{
    int rollno;
    char section;  
    int cgpa;
}studs;                     // now "struct students" = "studs"


int main(){
    struct student sd_abhay;    // this is the basic way to declare the datatype
    studs sd_archit;            //* this is shortcut way to declare
    studs sd_pratham;
    studs sd_uday;              //* NOTE: you can't have SAME object/instance Name in c++ in same Function

    sd_uday.cgpa = 8;
    sd_abhay.section = 'A';


    struct employee uday;
    uday.employeeid = 1;
    uday.favalphabet = 's';
    uday.salary = 120000;

    struct employee harry;
    harry.employeeid = 458;
    harry.favalphabet = 'h';
    harry.salary = 450000;

    struct employee pratham;
    pratham.employeeid = 105;
    pratham.favalphabet = 'P';
    pratham.salary = 780000;

    cout<<"The fav.alphabet of uday from employee(struct) is: "<< uday.favalphabet<<endl;
    cout<<"The salary of harry from employee(struct) is: "<< harry.salary <<endl;

    return 0;
}