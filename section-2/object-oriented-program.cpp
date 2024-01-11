#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        int p = 2 * (length + breadth);
        return p;
    }
    int getLength()
    {
        return length;
    }
    void setLength(int l)
    {
        length = l;
    }
    ~Rectangle()
    {
        cout << "Desctructor" << endl;
    }
};

int main()
{
    int length = 0, breadth = 0;
    cout << "Enter length and breadth => " << endl;
    cin >> length >> breadth;
    Rectangle r(length, breadth);
    cout << "Area = " << r.area() << endl
         << "Perimeter = " << r.perimeter() << endl;
    r.setLength(100);
    cout << "new length => " << r.getLength() << endl;
}
