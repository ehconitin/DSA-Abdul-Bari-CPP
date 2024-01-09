#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    cout << "Value of a = " << a << endl;
    int &r = a;
    cout << "Value of r = " << r << endl;
    int b = 25;
    r = b;
    cout << "Value of a after r = b => " << a << endl;
}