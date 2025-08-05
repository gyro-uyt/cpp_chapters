#include <iostream>
using namespace std;

class Area
{
public:
    float wall(float h, float b)
    {
        cout << "Area of the wall is " << h * b << endl;
        return 0;
    }
};

int main()
{
    Area a1, a2, a3;
    a1.wall(36, 5);
    a2.wall(13.3, 45);
    a3.wall(23.43, 56.3);

    return 0;
}