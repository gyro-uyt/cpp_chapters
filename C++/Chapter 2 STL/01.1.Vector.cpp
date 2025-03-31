// Making dot product code
// this code is for int only
// what if we want for float values, double values, other type of values?
// we'll need to make different classes for them?
// we use templates for that.
#include <iostream>
using namespace std;

class Vector
{
public:
    int *arr;
    int size;

    Vector(int size)
    {
        this->size = size;
        arr = new int[size];
    }

    int dotProduct(Vector &v)   // use '&' to avoid unnecesary copying of data
    {
        int d = 0; // d represents dot product
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
            // d = d + this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    Vector v1(3);
    v1.arr[0] = 2;
    v1.arr[1] = 7;
    v1.arr[2] = 5;

    Vector v2(3);
    v2.arr[0] = 3;
    v2.arr[1] = 1;
    v2.arr[2] = 4;

    int ans = v1.dotProduct(v2);
    cout << ans << endl;    

    return 0;
}