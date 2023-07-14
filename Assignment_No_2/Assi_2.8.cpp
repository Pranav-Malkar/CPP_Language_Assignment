#include<iostream>
using namespace std;
void maxint(int, int);
void maxfloat(float, float);
int main()
{
    int a,b;
    float c,d;
    cout<<"enter two integers and float";
    cin>>a>>b>>c>>d;
    maxint(3,4);
    maxfloat(8.4,6.8);
    return 0; 
}
void maxint( int x,int y)
{
    if(x>y)
    cout<<x<<" is a greatest number\n";
    else if(x==y)
    cout<<"both are equal\n";
    else
    cout<<y<<" is greatest number";
}
void maxfloat( float x,float y)
{
    if(x>y)
    cout<<x<<" is a greatest number\n";
    else if(x==y)
    cout<<"both are equal\n";
    else
    cout<<y<<" is greatest number";
}