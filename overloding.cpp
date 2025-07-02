#include<iostream>
using namespace std;
//sem class but diffrent argument and diffrnt data type

class demo1
{
    public:
    void sum(int a,int b)
    {
        cout<<"sum2="<<a+b<<endl;
    }
    void sum(int a,int b,int c)
    {
        cout<<"sum3="<<a+b+c<<endl;
    }

    void sum(int a,int b,int c,int d)
    {
        cout<<"sum4="<<a+b+c+d<<endl;
    }
};
int main(){
    demo1 d1;
    d1.sum(10,20);
    d1.sum(10,20,10);
    d1.sum(20,20,20,10);

    return 0;
}
