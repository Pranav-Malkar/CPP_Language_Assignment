#include<iostream>
using namespace std;
class negative
{
    private:
        int x,y,z;
    public:
        negative operator-()
        {
            x=-x;
            y=-y;z=-z;
            return *this;
        }
        void setdata(int a, int b,int c)
        {
            x=a,y=b,z=c;
        }
        void display()
        {
            cout<<x<<" "<<y<<" "<<z;
        }
};
int main()
{
    negative num;
    num.setdata(3,4,5);
    num.operator-();
    num.display();
}