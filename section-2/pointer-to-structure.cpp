#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r = {10, 5};
    cout << "Length and breadth using r. => " << r.length << "&" << r.breadth << endl;
    struct Rectangle *p;
    p = &r;
    cout << "Length and breadth using p-> => " << p->length << "&" << p->breadth << endl;
    cout << "------Dynamic allocatio=>----------" << endl;
    struct Rectangle *pr;
    pr = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    pr->length = p->length;
    pr->breadth = p->breadth;
    cout << "Length and breadth using dynamic allocation of pointer pr-> => " << pr->length << "&" << pr->breadth << endl;
}