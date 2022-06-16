#include <iostream>
using namespace std;

/*
10001
01010
00100
01010
10001
*/
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == j || i + j == 6)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }

    return 0;
}