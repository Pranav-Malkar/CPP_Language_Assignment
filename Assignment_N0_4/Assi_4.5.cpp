#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
class student
{
    private:
        int roll_no,age;
        char name;
    public:
        student()
        {
            cout<<"enter the name ,roll no and age \n";
            cin.getline(name,30,stdin);
            cin>>roll_no;
            cin>>age;            
        }
        void display()
        {
            cout<<"name of student is "<<name<<endl<<"roll no. of student is "<<roll_no<<endl<<"age of student is "<<age;

        }
};
int main()
{
    student s;
    s.display();
    return 0;

}