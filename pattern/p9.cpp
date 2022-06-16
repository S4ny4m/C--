#include<iostream>
using namespace std;

/*
0
10
010
1010
01010
*/

int main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {   
        
        for(j=1;j<=i;j++)
        {   
            if((i+j)%2==1)
                cout<<"1";
            else 
                cout<<"0";
        }
        cout<<endl;
    }

}