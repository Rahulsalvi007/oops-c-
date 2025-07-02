#include<iostream>
using namespace std;

class circle
{
    int r;
    float area,pi=3.14;//not decliar at

    public:
    circle()
    {
        pi=3.14;
    }

    void input()
    {
        cout<<"enter redious";
        cin>>r;
    }

    void clc()
    {
        area=pi*r*r;

    }

    void display()
    {
        cout<<"redious is="<<area;
    }
};
int main()
{
    circle d;
    d.input();
    d.clc();
    d.display();
}