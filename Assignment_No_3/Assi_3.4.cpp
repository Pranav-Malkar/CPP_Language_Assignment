#include<iostream>
using namespace std;
class largest
{
    private:
        int a,b,c;
    public: 
        void input()
        {
            cout<<"enter the three numbers\n";
            cin>>a>>b>>c;
        }
        void large()
        {
            if(a>b&&a>c||a>b&&b>c||a>c&&c>b)
            cout<<a<<" is largest number\n";
            else if(a>b&&c>a||c>a&&c>b||c>b&&b>a)
            cout<<c<<" is largest number\n";
            else 
            cout<<b<<" is largest number\n";
        }
};
int main()
{
    largest l;
    l.input();
    l.large();
    return 0;
}