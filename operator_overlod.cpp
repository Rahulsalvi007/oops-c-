#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:

    void input()
    {
        cin>>a>>b;
    }

    void display()
    {
        cout<<"A="<<a<<endl;
        cout<<"B="<<b<<endl;
    }

    demo operator+(demo p)
    {
        demo z;
        z.a=a+p.a;
        z.b=b+p.b;

        return z;

    }
};
int main()
{
    demo d1;
    demo d2;
    demo d3;

    d1.input();
    d2.input();

    d3=d1+d2;

    d1.display();
    d2.display();
    d3.display();
}