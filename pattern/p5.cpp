#include <iostream>
using namespace std;

int main()
{
    int i,j;
    char k=0;
    for (i=1;i<=5;i++)
    {   
        for(j=1;j<=i;j++)
        {
            k+=j;
            
            cout<<k<<" ";

        }
        cout<<endl;

    }
}