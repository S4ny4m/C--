#include <iostream>
using namespace std;

/*
a
ab
abc
abcd
abcde
*/

int main()
{
    int i = 1, j = 1;
    char c;

    for (; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            c = 96 + j;
            cout << c;
        }
        cout << endl;
    }

    return 0;
}