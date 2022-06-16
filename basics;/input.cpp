/*switch,for,while,dowhile all have same Syntax as C.*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter value of a:"<<endl;
    cin>>a;
    cout<<"2*"<<a<<" is "<<2*a<<endl;
    if (a<5)
        cout<<"Cant satisfy";
    else if (a<=7)
        cout<<"Niceshot";
    else
        cout<<"Too Long";
    return 0;
}   