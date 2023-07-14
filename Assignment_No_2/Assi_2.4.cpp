#include<iostream>
using namespace std;
void checkfib(int n);
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    checkfib(n);

}
void checkfib(int n)
{
    int i,temp=0,temp2=1;
    if(n==1)
    cout<<"yes number is present";
    else 
    {
        while(i<=n)
        {
            if(i==n)
            cout<<"yes number is present"<<endl;
            
            {
                temp=temp2;
                temp2=i;
                i=temp+temp2;
            }
            
        }
    }
}