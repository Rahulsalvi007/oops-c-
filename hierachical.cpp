#include<iostream>
using namespace std;
class demo1
{
    protected:
    int a,b;
    public:
    
    void input()
    {
    cout<<"enter a and b";
    cin>>a>>b;
    }
};

class demo2 : public demo1
{
    public:
    void sub()
    {
        cout<<"\nSutraction Is : "<<a-b;
    }
};

class demo3:public demo1
{
    public:
    void sum()
    {
        cout<<"a+b="<<a+b;
    }
};

int main(){
demo2 d2;
demo3 d3;

d3.input();
d3.sum();

d2.input();
d2.sub();
return 0;
}