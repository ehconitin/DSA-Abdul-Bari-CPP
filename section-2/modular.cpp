#include <iostream>
#include <stdio.h>

using namespace std;

int area(int length, int breadth)
{
    return length * breadth;
}

int perimeter(int length, int breadth)
{
    int p = 2 * (length + breadth);
    return p;
}
int main()
{
    int length = 0, breadth = 0;
    cout << "Enter length and breadth => " << endl;
    cin >> length >> breadth;
    int a = area(length, breadth);
    int p = perimeter(length, breadth);
    cout << "Area = " << a << endl
         << "Perimeter = " << p << endl;
}