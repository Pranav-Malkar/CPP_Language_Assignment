#include<iostream>
using namespace std;
void area(int a)
{
    cout<<"area of circle is "<<3.14*a*a<<endl;
}
void area(double l,int b)
{
    cout<<"area of rectangle "<<l*b<<endl;
}
void area(int h,int b)
{
    cout<<"area of triangle is "<<(h*b)/2<<endl;
}
int main()
{
    area(5);
    area(5,6);
    area(5.5,7);
    return 0;
}