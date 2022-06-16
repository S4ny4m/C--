#include <iostream>
using namespace std;

/*
12345
23456
34567
45678
56789
*/
int main()
{
    int i, j, n;
    n = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            cout << n++;
        }
        n = n - j + 2;
        cout << endl;
    }

    return 0;
}