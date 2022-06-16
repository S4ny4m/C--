#include <iostream>
using namespace std;

int main()
{
    int i, j, k, l = 5;
    for (i = 1; i <= 5; i++)
    {
        for (k = i; k >= 1; k--)
            cout << k;
        for (j = 2; j <= l; j++)
            cout << j;
        l--;
        cout << endl;
    }

    return 0;
}