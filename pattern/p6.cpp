#include<iostream>
using namespace std;


/*
56789
4567 
345  
23   
1*/

int main()
{
    int i,j,tem;
    for (i=5;i>=1;i--)
    {   
        tem=i;
        for(j=1;j<=i;j++)
        {
            cout<<tem++;
        }
        cout<<endl;
    }

}