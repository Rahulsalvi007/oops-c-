#include<iostream>
using namespace std;
class  demo2;

class demo1{
    int a,b;
    public:
    void input(){
    cout<<"enter a and b :";
    cin>>a>>b;
    }
    void output(){
        cout<<a<<" "<<b<<endl;
    }
    friend demo2 sum(demo1 p,demo2 q);
};

class demo2{
    int a,b;
    public:
    void input()
    {
        cout<<"enter a and b";
        cin>>a>>b;
    }

    void output()
    {
        cout<<a<<" "<<b<<endl;
    }
    friend demo2 sum(demo1 p,demo2 q);

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
    demo2 d2,d3;

    d1.input();
    d2.input();
    d3=sum(d1,d2);
    d1.output();
    d2.output();
    d3.output();
    return 0;
}