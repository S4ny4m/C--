#include <iostream>
using namespace std;

/*
11011
11011
00000
11011
11011
*/
int main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=5;j++)
        {
            if (i==3 || j==3)
                cout << 0;
            else 
                cout<<1;

        }
        cout << endl;
    } 
return 0;
}