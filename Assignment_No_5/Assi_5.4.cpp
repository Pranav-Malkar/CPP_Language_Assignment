#include<iostream>
using namespace std;
class cstring
{
    char str;
    public:
        void setdata()
        {
            cout<<"enter the string\n";
            cin.getline(str,50);
        }
        void display()
        {
            cout<<endl<<str;
        }
        cstring operator+(cstring s)
        {
            cstring temp;
            temp.str=strcat(str,s->str);
            return temp;
        }
};
int main()
{
    cstring c1,c2;
    c1.setdata();
    c2.setdata();
    c3=c1+c2;
    c3.showdata();
}