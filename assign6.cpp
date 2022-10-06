// swap two int variables using call by reference 
#include<iostream>
using namespace std;
void swap (int &,int &);
void swap (int &m,int &n)
{
   int temp;
   temp=m;
   m=n;
   n=temp;
   cout<<"swap value is m= "<<m<<" and n="<<n;
}
int main()
{
    int a,b;
    cout<<"Enter two number :"<<endl;
    cin>>a>>b;
    swap(a,b);
    return 0;
}