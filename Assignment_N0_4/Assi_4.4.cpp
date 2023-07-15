#include<iostream>
using namespace std;
class Date
{
    private:
        int date,month,year;
    public:
        Date(int x,int y,int z)
        {
            date=x;month=y;year=z;
        }
        void display()
        {
            cout<<date<<"-"<<month<<"-"<<year;
        }
};
int main()
{
    Date d(23,2,2003);
    d.display();
    return 0;
}