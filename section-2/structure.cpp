#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    int area;
};

int main()
{

    struct Rectangle r1;
    r1.length = 10;
    r1.breadth = 5;
    r1.area = r1.length * r1.breadth;
    cout << sizeof(r1) << endl
         << r1.area << endl;
}