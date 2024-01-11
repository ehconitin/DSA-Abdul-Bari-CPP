#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

int perimeter(struct Rectangle r)
{
    int p = 2 * (r.length + r.breadth);
    return p;
}

int main()
{
    struct Rectangle r = {0, 0};
    int l = 0, b = 0;
    cout << "Enter Length and breadth => " << endl;
    cin >> l >> b;
    initialize(&r, l, b);
    int a = area(r);
    int p = perimeter(r);
    cout << "Area = " << a << endl
         << "Perimeter = " << p << endl;
}
