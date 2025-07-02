#include<iostream>
using namespace std;

class demo2;
class demo1
{
    int a,b;
    public:
    void input(){
        cout<<"enter 2 number :";
        cin>>a>>b;
    }

    void display(){
        cout<<"\na="<<a;
        cout<<"\nb="<<b;
    }
     friend demo2 sum(demo1,demo2);
};

class demo2
{
    int a,b;
    public:
    void input()
    {
        cin>>a>>b;
    }
    void display(){
        cout<<"\na="<<a;
        cout<<"\nb="<<b;
    }
    friend demo2 sum(demo1,demo2);
};
demo2 sum(demo1 p,demo2 q)
{
    demo2 z;
    z.a=p.a+q.a;
    z.b=p.b+q.b;
    return z;
}
int main(){
    demo1 d1;
    demo2 d2, d3;
    d1.input();
    d2.input();
    d3 = sum(d1, d2);
    d1.display();
    d2.display();
    d3.display();
    return 0;
}

