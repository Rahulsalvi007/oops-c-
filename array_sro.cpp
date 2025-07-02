#include<iostream>
using namespace std;

class demo1
{
    int a[5],i;
    public:
    void input();
    void display();
    friend class demo3;
};
    void demo1::input()
    {
        cout<<"Enter array";
        for(i=0;i<5;i++)
        cin>>a[i];
    }

    void demo1::display()
    {
        cout<<"\n";
        for(i=0;i<5;i++)
        cout<<"\t"<<a[i];
    }
class demo2
{
    int b[5],i;
    public:
    void input();
    void display();
    friend class demo3;

};

    void demo2::input()
    {
        cout<<"Enter array";
        for(i=0;i<5;i++)
        cin>>b[i];
    }

    void demo2::display()
    {
        cout<<"\n";
        for(i=0;i<5;i++)
        cout<<"\t"<<b[i];
    }

class demo3
{
    int c[5],i;
    public:
    void display();
    void sum(demo1 d1,demo2 d2);
};

    void demo3::display()
    {
        cout<<"\n";
        for(i=0;i<5;i++)
        cout<<"\t"<<c[i];
    }

    void demo3::sum(demo1 d1,demo2 d2)
    {
        for(i=0;i<5;i++)
        c[i]=d1.a[i]+d2.b[i];
    }

int main()
{
    demo1 d1;
    demo2 d2;
    demo3 d3;
    
    d1.input();
    d2.input();

    d1.display();
    d2.display();

    d3.sum(d1,d2);

    d3.display();
}