#include<iostream>
using namespace std;
class demo1{
    int a,b;
    public:
        void input()
        {
            cout<<"enter 2 number :";
            cin>>a>>b;
        }
        void display()
        {
            cout<<"\n a="<<a;
            cout<<"\n b="<<b;
        }
        friend class demo2;

};

class demo2{
    int a,b;
    public:
    void input(){
        cout<<"enter 2 number :";
        cin>>a>>b;
    }
    void display(){
        cout<<"\n a2 ="<<a;
        cout<<"\n b2="<<b;
    }
    demo1 sum(demo1 p)
    {
        demo1 z;
        z.a=p.a+a;
        z.b=p.b+b;
        return z;
    }
};
int main(){
    demo1 d1,d3;
    demo2 d2;
    d1.input();
    d2.input();

    d3=d2.sum(d1);
    
    d1.display();
    d2.display();
    d3.display();
    return 0;
}