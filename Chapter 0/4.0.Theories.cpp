// There are 2 types of HEADER FILES:-
// 1) System Header Files: these are predefined header files which comes with compiler,, List of this is @cpp_reference.com_Header_files
#include<iostream>      // <iostream> here is a System Haeder file, whcih contains different codes for the funtion of Program
// User Defined Header Files: these are written by user, they are in "____.h" format,
//                            if in the currect directory there is file named "code.h" and there are some rules/ codes wriiten in it,
//                            then those codes/rules would be inlcuded and Applied here if written #include<code.h>
#include"4.code.h"      // This is user defined Header file,, this will follow Codes that i wrote on "4.code.h"

using namespace std;
int main()
{   int a=4, b=5,c,d;
    cout<<endl;
    cout<<"Either 'endl' or '\\n' are used to get New line \n";
    cout<<"Value of 'a' is: "<<a<<endl;
    cout<<"Value of 'b' is: "<<b<<endl;
    cout<<endl<<endl;


 cout<<"Following are the Types of OPERATORS in c++"<<endl;


 // Arithmetic Operators
     cout<<"The vale of a + b is: "<<a+b<<endl;      // addition     
     cout<<"The vale of a - b is: "<<a-b<<endl;      // subtraction
     cout<<"The vale of a * b is: "<<a*b<<endl;      // multiplication
     cout<<"The vale of a / b is: "<<a/b<<endl;      // division,, return only INTEGRAL PART
     cout<<"The vale of a % b is: "<<a%b<<endl;      // Modular or REMAINDER
     cout<<"The vale of a++ is: "  <<a++<<endl;      // a++ is Post Increment, if a operation is there on same line as a++ then the original value of 'a' is used First, then the value of 'a' gets Increased by 1
                                              // original value of 'a' gets executed first, then the value of 'a' gets +1
     cout<<"The vale of a-- is: "  <<a--<<endl;      
                                              // prints '5' as the 'a' got incremented in last step, now value of 'a' gets decreased by 1, when operation executed.
     cout<<"The vale of ++a is: "  <<++a<<endl;      // ++a is Pre Increment, value of 'a' is increased by '1' first and then the operation carries on
                                              // value of 'a' in last operation resulted in 4, as ++a is written,, Value of 'a' gets increased first and then Operation Takes Place
                                              // will print '5'
     cout<<"The vale of --a is: "  <<--a<<endl;      // 'a' gets subtracted first then prints, so '4'   
        // a++ & ++a yiels different result only when Operation is on the same line.
     cout<<endl<<endl;


 // Assignment Operators,       used to assign VALUES to VARIABLES
     int x=12,y=45;
     char code='c';
     float w=12.44;
     double h=43.43564375467;
     cout<<"Value of int x is: "<< x <<endl;
     cout<<"Value of int y is: "<< y <<endl;
     cout<<endl<<endl;


 // Comparison Operators,,          These return TRUE(1) or FALSE(0) values
     cout<<"The value of a == b is: "<< (a==b) <<endl;   
     cout<<"The value of a != b is: "<< (a!=b) <<endl;
     cout<<"The value of a >= b is: "<< (a>=b) <<endl;   // comp. operators SHOULD be in (____)
     cout<<"The value of a <= b is: "<< (a<=b) <<endl;
     cout<<"The value of a > b is:  "<< (a>b)  <<endl;
     cout<<"The value of a < b is:  "<< (a<b)  <<endl;
     cout<<endl<<endl;


 // Logical Operators
     cout<<"The value of 'a == b' AND 'a < b' is: "<< ((a==b) && (a<b))<<endl;  
     // '&&' is AND operator, returns TRUE only if both Conditions are TRUE 
     cout<<"The value of 'a == b' OR 'a < b' is: "<< ((a==b) || (a<b))<<endl;
     // '||' is OR operator, returns TRUE if either of the Condition is TRUE
     cout<<"The value of !('a == b' OR 'a < b') is: "<< !((a==b) || (a<b))<<endl;
     // '!' is a NOT operators, it reverses the output      
     cout<<endl<<endl;
    
    
return 0;
}
