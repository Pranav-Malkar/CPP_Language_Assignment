#include<iostream>
using namespace std;
int main()
{
    int digit,num,rem,i;
    cout<<"enter the number and digit "<<endl;
    cin>>num>>digit;
    for(i=num;i>=0;i/10)
    {
        rem=i%10;
        if(rem==digit)
        cout<<"the digit is present";
        else
        cout<<"the digit is not present";
    }
    return 0;

}