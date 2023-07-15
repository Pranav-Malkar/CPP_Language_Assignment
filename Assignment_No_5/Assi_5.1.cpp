#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;
    public:
        void setdata(int x,int y)
        {
            a=x;b=y;
        }
        void showdata()
        {
            cout<<"real="<<a<<" imag="<<b<<endl;
        }
        complex operator+(complex c)
        {
            complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
        complex operator-(complex c)
        {
            complex temp;
            temp.a=a-c.a;
            temp.b=b-c.b;
            return temp;
        }
        complex operator*(complex c)
        {
            complex temp;
            temp.a=a*c.a;
            temp.b=b*c.b;
            return temp;
        }
        complex operator++()
        {
            a++;
            b--;
            return *this;
        }
        
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(5,6);
    c2.setdata(3,2);
    c3=c1+c2;
    c3.showdata();
    c3=c1-c2;
    c3.showdata();
    c3=c1*c2;
    c3.showdata();
    c1.operator++();
    c1.showdata();
    return 0;
}