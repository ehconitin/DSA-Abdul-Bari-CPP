#include <iostream>

using namespace std;

int global = 0;

int globalfunc(int n)
{
    if (n > 0)
    {
        global++;
        return globalfunc(n - 1) + global;
    }
    return 0;
}

int staticfunc(int n)
{
    static int x = 0;
    if (n > 0)
    {
        x++;
        return staticfunc(n - 1) + x;
    }
    return 0;
}

int main()
{
    int n = 5;
    printf("%d\n", globalfunc(n));
    printf("%d\n", staticfunc(n));
}