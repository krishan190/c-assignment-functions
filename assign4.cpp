#include<iostream>
using namespace std;
int fact (int);
int combi(int ,int);
void printpascal(int);
int fact (int x)
{
    if(x<=0)
     return 1;
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int combi(int n,int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}
void printpascal(int line)
{
    int i,j,k,r;
    for(i=1;i<=line;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*line-1;j++)
        {
             if(j>=line+1-i && j<=line-1+i &&k)
               {
                 cout<<"%d"<<combi(i-1,r);
                 k=0;
                 r++;
               }
             else
               {
                  cout<<" ";
                  k=1;
                }
        }
         cout<<endl;
    }
}
int main()
{
   int n;
   cout<<"Enter the value of n and r is:"<<endl;
   cin>>n;
   printpascal(n);
   return 0;
}