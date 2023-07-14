#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        break;
        
    }
    if(i<n)
    cout<<"this is not a prime number"<<endl;
    else
    cout<<"it is a prime number";


    return 0;
}