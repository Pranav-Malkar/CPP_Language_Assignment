#include<iostream>
using namespace std;
class time
{
    int hr,min,sec;
    public:
      void setdata(int x,int y, int z)
      {
        hr=x, min=y, sec=z;
      }
      void showdata()
      {
        cout<<hr<<" hour "<<min<<" minute "<<sec<<" seconds";
      }
};
int main()
{
    time t1;
    t1.setdata(3,20,45);
    t1.showdata();
}