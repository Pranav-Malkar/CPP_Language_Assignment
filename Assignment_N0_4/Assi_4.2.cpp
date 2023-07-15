#include<iostream>
using namespace std;
class time
{
    private:   
        int h,m,s;
    public: 
        void settime(int x,int y,int z)
        {
            h=x;m=y;s=z;
        }
        void showtime()
        {
            cout<<h<<" hour "<<m<<" min "<<s<<" sec "<<endl;
        }
        time add(time t)
        {
            time temp;
            temp.h=h+t.h;
            temp.m=m+t.m;
            temp.s=s+t.s;
            if(temp.s>60)
            {
                temp.s=temp.s-60;
                temp.m++;
            }
            if(temp.m>60)
            {
                temp.m=temp.m-60;
                temp.h++;
            }
            return temp;
        }
};
int main()
{
    time t1,t2,t3;
    t1.settime(5,40,20);
    t2.settime(2,29,49);
    t3=t1.add(t2);
    t3.showtime();
    return 0;
}