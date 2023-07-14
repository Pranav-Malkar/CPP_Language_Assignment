#include<iostream>
using namespace std;
void swap(int& ,int&);
int main()
{
    int a,b;
    cout<<"enter two numbers "<<endl;
    cin>>a>>b;
    cout<<"numbers before swapping "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"numbers after swapping "<<a<<" "<<b;
    return 0;
}
void swap( int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}