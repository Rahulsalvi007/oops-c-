#include<iostream>
using namespace std;

class demo1
{
    public:
    void show()
    {
        cout<<"show"<<endl;
    }

};
class demo2:public virtual demo1
{
    public:
    void display()
    {
        cout<<"display"<<endl;
    }
};
class demo3:public virtual demo1
{
    public:
    void view()
    {
        cout<<"view"<<endl;
    }
};
class demo4:public demo2,public demo3
{
    public:
    void output()
    {
        cout<<"output"<<endl;
    }
};

int main()
{
    demo4 d4;

    d4.show();
    d4.display();
    d4.output();
    d4.view();
}