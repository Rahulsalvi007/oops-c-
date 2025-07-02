#include<iostream>     //constractor overloading
using namespace std;

class demo
{
    public:

    demo()
    {
        cout<<"defult constractor called"<<endl;
    }

    demo(int x)
    {
        cout<<"int constractoar called"<<endl;
    }
    demo(int x,int y)
    {
        cout<<"int constoar called"<<endl;
    }
};

int main()
{
    demo d1;
    demo d2(10);
    demo d3(100,200);

}