#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"numbers before swapping are "<<a<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"numbers after swapping are "<<a<<b;
    return 0;
}