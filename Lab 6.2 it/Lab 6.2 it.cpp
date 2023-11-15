// Лабораторна робота № 6.2i

#include <iostream> 
#include <iomanip>
#include <cmath>
using namespace std;


void Init(int* a, int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 91 - 40;
    }
}

void Change(int* a, int size)
{  //міняє місцями перший елемент із найменшим парним!!!

    int pmin = -1;
    for (int i = 0; i < size; i++)
        if (a[i] % 2 == 0)
            pmin = i;

    if (pmin == -1)
        return;

    for (int i = 0; i < size; i++)
        if (a[i] % 2 == 0 && a[i] < a[pmin])
            pmin = i;

    int t = a[0];
    a[0] = a[pmin];
    a[pmin] = t;
}

void Print(int* a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

int main()
{
    const int n = 22;
    int a[n];

    cout << "initialization" << endl;
    Init(a, n);

    cout << "vyvid masive" << endl;
    Print(a, n);
    Change(a, n);
    cout << "vyvid masive" << endl;
    Print(a, n);

    return 0;
}
