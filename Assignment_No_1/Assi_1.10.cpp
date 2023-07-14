#include<iostream>
using namespace std;
int main()
{
    int a[10]={2,3,5,7,8};
    int i,sum=0;
    for(i=0;i<10;i++)
    sum+=a[i];
    cout<<"sum of array is "<<sum;
    return 0;

}