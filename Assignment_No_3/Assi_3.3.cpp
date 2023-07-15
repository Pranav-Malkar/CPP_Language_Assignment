#include<iostream>
using namespace std;
class fact
{
    private:
        int n;
    public:
        void input()
        {
            cout<<"enter the number"<<endl;
            cin>>n;
        }
        void fac()
        {
            int pro=1,i;
            for(i=1;i<=n;i--)
            { 
                pro*=i;
                
            }   
            cout<<"the factorial of number is "<<pro ;
        } 
};
int main()
{
    fact f;
    f.input();
    f.fac();
}