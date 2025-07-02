#include<iostream>
using namespace std;
 class demo1                //virtual base class
 {
    protected:
    int a,b;
    public:
    
    void display()
    {
        cout<<"class demo1:"<<endl;

    }
 };

 class demo2:public virtual demo1
 {
    public:
    void view()
    {
        cout<<"class demo2:"<<endl;
    }
 };

 class demo3: public virtual demo1
 {
    public:
    void show()
    {
        cout<<"classs demo3:"<<endl;
    }
 };
 class demo4:public demo3,public demo2
 {
    public:
    void output()
    {
        cout<<"classs demo4:"<<endl;
    }
 };

 int main()
 {
    demo4 d4;
    d4.display();
    d4.view();
    d4.show();
    d4.output();
    return 0;
 }