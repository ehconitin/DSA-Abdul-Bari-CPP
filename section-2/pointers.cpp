#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    int *pr;
    pr = (int *)malloc(5 * sizeof(int)); // used in c
    pr[0] = 10;
    pr[1] = 20;
    pr[2] = 30;
    pr[3] = 40;
    pr[4] = 50;
    int *prr;
    prr = new int[5]; // used in c++
    cout << "Value of a = " << a << endl;
    cout << "Adsress of a using &a = " << &a << endl;
    cout << "Value of a thru pointer = " << *p << endl;
    cout << "Address of a using pointer p = " << p << endl;
    cout << "Size of *p = " << sizeof(*p) << endl;
    cout << "Size of p = " << sizeof(p) << endl;
    cout << "incoming array initialized using pointer pr" << endl;
    for (int i = 0; i <= 4; i++)
    {
        cout << i << endl;
    }
    cout << "Size of pr = " << sizeof(pr) << endl;
    cout << "size of *pr = " << sizeof(*pr) << endl;
}