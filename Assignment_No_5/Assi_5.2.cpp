#include<iostream>
using namespace std;
class time
{
    private:
        int hours,min,sec;
    public:
        time operator>>()
        {
            cout<<"enter the hours :";
            cin>>hours;
            cout<<"\nenter the minutes :";
            cin>>min;
            cout<<"\nenter the seconds :";
            cin>>sec;
            return *this;
        }
        time operator<<()
        {
            cout<<"hours :"<<hours<<"\nminutes :"<<min<<"\nseconds :"<<sec;
            return *this;
        }
        void operator==(time t)
        {
            if(hours==t.hours&&min==t.min&&sec=t.sec)
            cout<<"both times are equal\n";
            else
            cout<<"both times are not equal\n";
            
        }
};
int main()
{
    time t1,t2;
    t1.operator>>();
    t1.operator<<();
    t2.operator>>();
    t2.operator<<();
    t1==t2;
}