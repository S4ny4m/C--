#include<iostream>
using namespace std;

/*
1
10
101
1010
10101*/


int main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {   
        
        for(j=1;j<=i;j++)
        {   
            if(j%2==1)
            cout<<"1";
            else 
            cout<<"0";
        }
        cout<<endl;
    }

}