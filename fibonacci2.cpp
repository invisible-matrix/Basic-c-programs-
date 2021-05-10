# include<iostream>
using namespace std;
int fib(int n)
{
    int t1 = 0,t2=1,nextterm = 0,i;
    if (n==0)||(n==1)
    {
        return 1;
    }
    else
    {
        nextterm = t1+t2;
        for (int i=3; i<=n; i++)
        {
            t1=t2;
            t2= nextterm;
            nextterm = t1+t2;
        }
        return t2;
    }
}
int  main()
{
    int n ;
    cout<<fib(n)<<"\t";
    

}
