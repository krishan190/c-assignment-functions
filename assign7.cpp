#include<iostream>
using namespace std;
int add(int a,int b,int c=0)
{
    return a+b+c;
}
int main()
{
    cout<<"Addition of 2 number is"<<add(5,2)<<endl;
    cout<<"Addition of 3 number is"<<add(4,3,1)<<endl;
    return 0;
}