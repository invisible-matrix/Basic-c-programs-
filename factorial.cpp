# include<iostream>
# include<math.h>
using namespace std;
int main()
{
    int num ,n;
    long int factorial=1;
    cout<<"enter a number :";
    cin>>num;
    if (num<0)
    {
        cout<<"factorial of negative nnumber cannot be found";
        

    }
    else{
        for(int i=1; i<=num;i++)
        {
        factorial = factorial*i;
        }
         cout<<"the factorial of  "<<num<<" is  "<<factorial;

    }
    


}