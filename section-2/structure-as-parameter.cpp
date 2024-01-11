#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void callbyvalue(struct Rectangle r)
{ // creates a new struct Rectangle r in heap memory
    r.length = 15;
    cout << "Length = " << r.length << endl
         << "Breadth = " << r.breadth << endl;
}

void callbyaddress(struct Rectangle *p)
{
    p->breadth = 9;
}

struct Rectangle *create()
{
    struct Rectangle *rect;
    rect = new Rectangle; //=>syntax for c++
    // rect = (struct Rectangle *)malloc(sizeof(struct Rectangle)); => syntax for c
    rect->length = 100;
    rect->breadth = 50;
    return rect;
}

int main()
{
    struct Rectangle r;
    r.length = 10;
    r.breadth = 8;

    cout << "Length = " << r.length << endl
         << "Breadth = " << r.breadth << endl;
    callbyvalue(r);
    callbyaddress(&r);
    cout << "Print after calling the call by address fn => " << endl;
    cout << "Length = " << r.length << endl
         << "Breadth = " << r.breadth << endl;
    struct Rectangle *rect;
    rect = create();
    cout << "Print after calling the create fn" << endl;
    cout << "Length = " << rect->length << endl
         << "Breadth = " << rect->breadth << endl;
}
