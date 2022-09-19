#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<endl<<"Enter a";
    cin>>a;

    cout<<endl<<"Enter b";
    cin>>b;

    cout<<endl<<"Enter c";
    cin>>c;

    if(a>b && a>c)
    {
        cout<<endl<<"No is greater,a";
    }
    else if(b>a && b>c)
    {
        cout<<endl<<"No is greater,b";
    }
    else if(c>a && c>b)
    {
        cout<<endl<<"No is greater";
    }
    else
    {
        cout<<endl<<"All are equal";
    }
    return 0;
}