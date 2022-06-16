#include <iostream>
using namespace std;
/*
01010
01010
01010
01010
01010
*/

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for (j=1;j<=5;j++)
        {
            if (j%2==1)
                cout<<0;
            else 
               cout<<1;
        }
        cout<<endl;
    }
 
return 0;
}