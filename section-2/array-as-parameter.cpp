#include <iostream>
#include <stdio.h>

using namespace std;

void printarr(int *A, int n)
{
    cout << "Array A printed through function printarr => " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    A[0] = 5;
}

int *returnArr(int size)
{
    int *p;
    p = new int(size);
    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }
    return p;
}

int main()
{
    int A[] = {3, 6, 9, 12, 15};
    int n = 5;
    cout << "Array A printed thru main function => " << endl;
    for (int a : A)
        cout << a << " ";
    cout << endl;
    printarr(A, n);
    cout << "Array A printed thru main function after A[0] is assigned in function printarr => " << endl;
    for (int a : A)
        cout << a << " ";
    cout << endl;
    ////////////////////////// returning array =>
    int *Ar, size = 5;
    Ar = returnArr(size);
    cout << "New Array printed. i.e., array returned from fn returnArr = > " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << Ar[i] << " ";
    }
    cout << endl;
}