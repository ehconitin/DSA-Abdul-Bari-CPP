#include <stdio.h>
#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a;
    int b;
    a = 10;
    b = 12;
    swap(a, b);
    cout << "First number = " << a << endl;
    cout << "Second number = " << b << endl;
}