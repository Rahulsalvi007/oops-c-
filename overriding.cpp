
#include<iostream>
using namespace std;
class demo1
{
    public:
    void sum()
    {
        cout<<"sum"<<endl;
    }
};
class demo2:public demo1
{
    public:
    void sum()
    {
        cout<<"sum1"<<endl;
        
    }
};
class demo3:public demo2
{
    public:
    void sum()
    {
        cout<<"sum2"<<endl;
    }
};
 
int main(){
    demo1 d1;
    demo2 d2;
    demo3 d3;
    
    d1.sum();
    d2.sum();
    d3.sum();
    return 0;
}