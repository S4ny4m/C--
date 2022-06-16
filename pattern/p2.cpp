/*
A 
B B
C C C
D D D D
*/

#include <iostream>
using namespace std ;

int main()
{
    int i,j;
    char k;
    for (i=1;i<5;i++)
    {   
        k=i+64;
        for(j=1;j<=i;j++)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
return 0;

}