#include <iostream>
using namespace std;
/*
1
11
101
1001
11111
*/

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {

        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == 5)
                cout << "1";
            else
                cout << "0";
        }
        cout << endl;
    }
}