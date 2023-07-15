#include<iostream>
using namespace std;
class bank
{
    private:
        int principal,year;
        static int roi;
        float si;
    public:
        void input()
        {
            cout<<"enter the principal amount and year\n";
            cin>>principal>>year;
        }
        void calculate()
        {
            si=(principal*roi*year)/100.0;
            cout<<"simple intrest will be "<<si;
        }
};
int bank::roi=10;
int main()
{
    bank b;
    b.input();
    b.calculate();
    return 0;
}