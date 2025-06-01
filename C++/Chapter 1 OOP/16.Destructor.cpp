#include <iostream>
using namespace std;

int count = 0;

// Destructor never takes an Arguement nor does it return any value
class Num {
  public:
    Num() {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }
    ~Num() { // '~' is used to represent Destructor followed by syntax of Constructor
        cout << "This is the time when Destructor is called for object number " << count << endl;
        count--;
    }
};

int main() {
    cout << "    We are inside our main() function" << endl;
    cout << "Creating first object n1" << endl;
    Num n1;

    // this curly braces are block of code,
    // elements inside the block have their scope limited inside the block Onnly
    {
        cout << "  Entering this block" << endl;
        cout << "Creating 2 more objects" << endl;
        Num n2, n3;
        cout << "  Exiting this block" << endl;
    }
    cout << "Back to main() function" << endl;

    return 0;
}
