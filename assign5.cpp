#include<iostream>
using namespace std;
void fib (int n)
{
    int a=-1,b=1,c;
    if(n==0||n==1)
    cout<<"No is in fibonaaci series:"<<endl;
    c=a+b;
    while(c<n)
    {
        a=b;
        b=c;
        c=a+b;
        cout<<c<<" ";
    }
    if(c==n)
    cout<<"No is in fibonacci series:"<<endl;
    else
    cout<<"No is not fibonacci series"<<endl;
    
}
int main()
{
    int x;
    cout<<"Enter the number :"<<endl;
    cin>>x;
    fib(x);
    return 0;
}