#include<iostream>
using namespace std;
class demo1
{
    public:
    int a,b,sum=0,sub=0,mul=0,div=0;
    void input()
    {
        
        cout << "enter a nd b" << endl;
        cin>>a>>b;
    }
};

class demo2 :public demo1
{
    public:
    void process()
    {
        
        sum=a+b;
        sub=a-b;
        mul=a*b;
        div=a/b;
    }

};

class demo3 :public demo2
{
    public:
    void display()
    {
        cout<<"sum. is="<<sum<<endl;
        cout<<"sub. is="<<sub<<endl;
        cout<<"mul. is="<<mul<<endl;
        cout<<"div. is="<<div<<endl; 
        

    }
};

int main(){
    demo3 s;

    s.input();
    s.process();
    s.display();
    return 0;
}
