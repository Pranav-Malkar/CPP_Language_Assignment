#include<iostream>
using namespace std;
int add(int,int,int=0);
int main()
{
    int a,b,c,sum;
    cout<<"enter the numbers for adding"<<endl;
    cin>>a>>b>>c;
    sum=add(a,b,c);
    cout<<"sum is "<<sum;
    return 0; 
}
int add(int x,int y,int z)
{
    return x+y+z;
}