#include<iostream>
using namespace std;

int main()
{
    int a,b,add,sub,mul,divi,op;

    cout<<endl<<"Enter 1 for the add";
    cout<<endl<<"Enter 2 for the sub";
    cout<<endl<<"Enter 3 for the mul";
    cout<<endl<<"Enter 4 for the divi";

    cout<<endl<<"Enter a";
    cin>>a;

    cout<<endl<<"Enter b";
    cin>>b;

    cout<<endl<<"op";
    cin>>op;
    
    if(op==1)
    {
        cout<<endl<<"Ad ="<<a+b;
    }
    else if(op==2)
    {
    cout<<endl<<"Sub"<<a-b;

    }
    
    else if(op==3)
    {
     cout<<endl<<"mul"<<a*b;

    }
     
   
   else if(op==4)
   {
    cout<<endl<<divi<<a/b;
   }
   
   else
   {
   cout<<endl<<"Wrong option";
   }
   return 0;
}

