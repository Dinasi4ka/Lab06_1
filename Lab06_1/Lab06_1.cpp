// Lab06_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// інтераційний 

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int n, const int Low, const int High)
{
    for (int i = 0; i < n; i++)
        a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}
void Mode(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        if ((a[i] > 0) || (a[i] % 3 != 0))
            a[i] = 0;
}
int Number(int* a, const int size)
{
    int k = 0;
    for (int i = 0; i < size; i++)
        if ((a[i] > 0) || (a[i] % 3 != 0))
            k++;
    return k;
}
int Sum(int* a, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        if ((a[i] > 0) || (a[i] % 3 != 0))
            S += a[i];
    return S;
}

int main()
{
    srand((unsigned)time(NULL)); 

    const int n = 22;
    int a[n];

    int Low = -10;
    int High = 35;

    Create(a, n, Low, High);
    Print(a, n);

    cout << " " << "N = " << Number(a, n) << endl;
    cout << " " << "S = " << Sum(a, n) << endl;

    Mode(a, n);
    Print(a, n);

    return 0;
}

