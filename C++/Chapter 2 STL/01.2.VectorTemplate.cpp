/*
Templates are also knows as Parameterised classes.
class -> object
Templates -> class

Why use templates?
1. to follow DRY principle
2. Generic programming

Templates and STL will give u an edge in Competetive programming, it saves lots of time.

eg. of template is like,    class Vector
                           /     |      \
                     VecInt  VecFloat  VecDouble
    Instead of making different classes for different parameters we create templates.
*/

// Making dot product code using templates
#include <iostream>
using namespace std;

template <class T>
// now in class we replace all those occurances that changes for different parameters like vector sum their arrays etc
// we do not change all parameters like size, which will be int only for all versions of Vector.
class Vector
{
public:
    T *arr;
    int size;

    Vector(int size)
    {
        this->size = size;
        arr = new T[size];
    }

    T dotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    Vector<int> v1(3);
    v1.arr[0] = 2;
    v1.arr[1] = 7;
    v1.arr[2] = 5;

    Vector<int> v2(3);
    v2.arr[0] = 3;
    v2.arr[1] = 1;
    v2.arr[2] = 4;

    int ans1 = v1.dotProduct(v2);
    cout << ans1 << endl;

    Vector <float>v3(2);
    v2.arr[0] = 2.4;
    v2.arr[1] = 1.5;

    Vector <float>v4(2);
    v3.arr[0] = 0.6;
    v3.arr[1] = 1.8;

    float ans2 = v3.dotProduct(v4);
    cout << ans2 << endl;

    return 0;
}