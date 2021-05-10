#include<iostream>
using namespace std;
int main()
{
    int num,t=0,a=0,b=1;
    cout<<"enter the numbers :";
    cin>>num;
    cout<<"the series:"<<a<<"\t"<<b;
    t = a+b;
    for(int i=3; i<=num; i++)
    {
        cout<<"\nt = "<<t;
        a=b;
        b=t;
        t=a+b;
    
    }
}
/* this is to print fibonnaci till nth term*/
