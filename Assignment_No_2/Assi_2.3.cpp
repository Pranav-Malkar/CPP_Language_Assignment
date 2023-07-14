#include<iostream>
using namespace std;
int main()
{
    int i,x,y,k=1;
    cout<<"enter the value of x and y"<<endl;
    cin>>x>>y;
    for(i=1;i<=y;i++)
    {
        k*=x;
    }
    cout<<"x raised to y is "<<k;
    return 0;
}