#include<iostream>
using namespace std;
int max(int x,int y)
{
   if(x>y)
   cout<<"max is = "<<x;
   else
   cout<<"max is = "<<y;
   return 0;
}
float max(float a,float b)
{
   if(a>b)
   cout<<"max is = "<<a;
   else
   cout<<"Max is = "<<b;
   return 0;
}
int main()
{
    int x,y;
    float a,b;
    
    cout<<"Maximum integer is "<<max(10,30)<<endl;
    cout<<"Maximum float is :"<<max(4.6,9.0);
}