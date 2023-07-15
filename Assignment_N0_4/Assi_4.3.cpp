#include<iostream>
using namespace std;
class cube
{
    private:
        int side;
    public:
        cube(int side)
        {
            cout<<"volume of cube is "<<side*side*side;
        }
       
};
int main()
{
    cube c(5);
    return 0;
}