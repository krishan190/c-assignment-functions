#include<iostream>
using namespace std;
int big_num (int n)
{
    int r,max=0;
    while(n!=0)
    {
        r=n%10;
        if(r>max)
        {
            max=r;
        }
        n=n/10;
    }
    cout<<"greatest no is ="<<max;
}
int main()
{
    int x=57463;
    big_num(x);
    return 0;
}