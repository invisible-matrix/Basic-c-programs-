#include<iostream>
using namespace std;

int main()
{
int n , num, dighit, rev =0;
cout<<"enter the number";
cin>>num;
n=num;
do
{
    dighit = num%10;
    rev = (rev*10)+dighit;
    num = num/10;
} while (num!=0);
cout<<"the rev of the number :"<<rev;

if(n==rev)
{
    cout<<"\n number palindrome";
}
else{
    cout<<"\n not plindrome";
}
}