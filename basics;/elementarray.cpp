#include <iostream>
using namespace std;

int main()
{
    int n, i, j, temp;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    //sorting 
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    //counting
    int count, last;
    for (i = 0; i < n; i += count)
    {
        count = 1;
        for (j=i;(a[j]==a[j+1]);j++)
            count++;
        cout<<a[i]<<" is "<<count<<" no of times "<<endl;
        last =a[i];
    }
    return 0;
}