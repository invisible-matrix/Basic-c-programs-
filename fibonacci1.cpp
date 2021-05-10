#include<iostream>
using namespace std;
int main()
{
    int num,t=0,a=0,b=1;
    cout<<"enter the number :";
    cin>>num;
    cout<<"the series:"<<a<<"\t"<<b;
    t = a+b;
    while (t<=num)
    {
        cout<<"\nt = "<<t;
        a=b;
        b=t;
        t=a+b;
    }
}
/* to print fibonacii series till the number entered*/