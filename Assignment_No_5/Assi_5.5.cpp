#include<iostream>
using namespace std;
class exc
{
    private:
         double a,b;
    public:
        void inputdata()
        {
            cout<<"enter the values";
            cin>>a>>b;
        }
        void div()
        {
            try{
                if(cin.fail())
                throw 'e';
                if(b==0)
                throw 0;
                cout<<"division of two number is "<<a/b;
            }
            catch (int x)
            {
                cout<<"!!!denominator is zero";
            }
            catch(char x)
            {
                cout<<"please enter the valid input";
            }
        }
};
int main()
{
    exc e;
    e.inputdata();
    e.div();
    return 0;
}