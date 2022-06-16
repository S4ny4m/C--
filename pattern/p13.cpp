#include <iostream>
using namespace std;

/*
1 3 5 7 9 
3 5 7 9
5 7 9
7 9
9
*/

int main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {
        for (j=2*i-1;j<=9;j+=2)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
 
return 0;
}