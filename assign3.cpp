#include<iostream>
using namespace std;
int power (int b,int p)
{
    int i,y=1;
    for(i=1;i<=p;i++)
    {
    y=y*b;
    }
    cout<<"The value is ="<<y;
    
}
int main()
{
    int x,y;
    cout<<"Enter the base and power :"<<endl;
    cin>>x>>y;
    power(x,y);
    return 0;
}