#include<iostream>
using namespace std;

template<class test1>
class demo
{
    test1 a,b,c;
    public:
    void input()
    {
        cout<<"enter a and b:";
        cin>>a >> b;
    }

    void sum()
    {
        c=a+b;
    }

    void output()
    {
        cout<<"\nsum is: =>"<<c<<endl;
    }
};
int main()
{
    demo<int>d1;//int value ke liye
    d1.input();
    d1.sum();
    d1.output();

    demo<float>d2;//float value ke liye
    d2.input();
    d2.sum();
    d2.output();

    demo<long>d3;//long value ke liye
    d3.input();
    d3.sum();
    d3.output();

    demo<char>d4;//valuechar  ke liye
    d4.input();
    d4.sum();
    d4.output();

}
