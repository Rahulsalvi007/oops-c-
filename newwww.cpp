#include<iostrem>
using namespace std;
class demo1{
    int a,b;
    public:
    void input(){
        cout<<"enter a and b";
        cin>>a>>b;
    }

    void output(){
        cout<<"a="a<<endl;
        cout<<"b="b<<endl;
    }
};

class demo2{
    int a,b;
    void input(){
        cout<<"enter a nd b:";
        cin>>a>>b;
    }
    void output(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};

class demo3{
    int a,b;
    public:
    void input(){
    cout<<"enter a and b ";
    cin>>a>>b;
    }
};
 demo3 sum(demo1 p,demo q)
 {
    demo3 z;
    z.a=p.a+q.a;
    z.b=p.b+q.b;
    return z;
 }
 int main(){
    demo1 p;
    demo2 q;
    demo3 z;
    p.input();
    q.input();
    z=sum(p,q);
    p.output();
    q.output();
    z.output();
    return 0;
 }