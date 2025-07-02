#include<iostream>
using namespace std;
class  demo2;
class demo3;
class demo1{
    int a,b;
    public:
    void input(){
    cout<<"enter a and b :";
    cin>>a>>b;
    }
    void output(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    friend demo3 sum(demo1 p,demo2 q);
};

class demo2{
    public:
    
    int a,b;
    void input()
    {
        cout<<"enter a and b";
        cin>>a>>b;
    }

    void output()
    {
        cout<<"a="<<a;
        cout<<"b="<<b<<endl;
    }
    friend demo3 sum(demo1 p,demo2 q);

};

class demo3{
    int a,b;
    public:
    void input(){
    cout<<"enter a and b";
    cin>>a>>b;
    }
       void  sum(demo1 p,demo2 q)
    {
    
        a=p.a+q.a;
        b=p.b+q.b;
        
    }

    void output(){
        cout<<"a="<<a;
        cout<<"b="<<b<<endl;
    }
 
    // friend demo3 sum(demo1 p,demo2 q);

};


int main(){
    demo1 d1;
    demo2 d2;
    demo3 d3;
    d1.input();
    d2.input();
    d3.sum(d1,d2);
    d3.output();
    return 0;
}
