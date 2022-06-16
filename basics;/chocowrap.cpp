#include <iostream>
using namespace std;
int fun(int choco, int wrap)
{
    if (choco<wrap)
        return 0;
    else 
    {
        choco=choco-wrap;
        return 1+fun(choco,wrap);
    }
}
int main()
{
    int money,cost,wrap;
    cout<<"Enter money cost and wrap"<<endl;
    cin>>money>>cost>>wrap;
    int choco=money/cost;
    // cout<<"FUNCTION =="<<fun(choco,wrap);
    // cout<<"without wrap="<<choco<<endl;
    choco+=fun(choco,wrap);
    cout<<endl<<"total choco =="<<choco;
return 0;
}