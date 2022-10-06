#include<iostream>
using namespace std;
float area(int r)
{
    return 3.14*r*r;
}
int area(int x,int y)
{
    return x*y;
}
float area(float b,float h)
{
    return (0.5*b*h);
}
int main()
{
    int x,y,r;
    float b,h;
    cout<<"Enter length and breadth of rectangle:"<<endl;
    cin>>x>>y;
    cout<<"Enter the radius of circle:"<<endl;
    cin>>r;
    cout<<"Enter the bredth and height of triangle:"<<endl;
    cin>>b>>h;
    
    cout<<"\n Area of rectangle is "<<area(x,y);
    cout<<"\n Area of circle is "<<area(r);
    cout<<"\n Area of triangle is:"<<area(b,h);
    return 0;
}