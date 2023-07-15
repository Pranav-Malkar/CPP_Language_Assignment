#include<iostream>
using namespace std;
class complex
{
    private:
       int real,imag;
    public:
       void setdata(int x,int y)
       {
        real=x,imag=y;
       }
       void showdata()
       {
        cout<<"real part is "<<real<<" and imaginary part is "<<imag<<endl;
       }
};
int main()
{
    complex c1,c2;
    c1.setdata(5,6);
    c2.setdata(8,9);
    c1.showdata();
    c2.showdata();
    return 0;
}