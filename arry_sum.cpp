#include<iostream>// class array sum;
using namespace std;
class demo2;
class demo3;
class demo1
{    int a[10],n,i;
    public:
    void input()
    {
        cout<<"ENETR SIZE OF ARRAY:";
        cin>>n;
        cout<<"ENETR ARRAY:";
        for(i=0;i<n;i++)
        cin>>a[i];
    }
    void display()
    {
        for(i=0;i<n;i++)
        cout<<"\nARRAY is="<<a[i];
    }
friend class demo3;

};
class demo2
{
    int b[10],n,i;
    public:
    void input()
    {
        cout<<"ENETR SIZE OF ARRAY:";
        cin>>n;
        cout<<"ENETR ARRAY:";
        for(i=0;i<n;i++)
        cin>>b[i];
    }
    void display()
    {
        for(i=0;i<n;i++)
        cout<<"\nARRAY is="<<b[i];
    }
friend  class demo3;

};
class demo3
{
    int c[10],n,i;
    public:
    void input()
    {
        cout<<"ENETR SIZE OF ARRAY:";
        cin>>n;
    }
    void display()
    {
                for(i=0;i<n;i++)
        cout<<"\nARRAY is="<<c[i];
    }


    void sum(demo1 d1,demo2 d2){
    for(int i=0;i<n;i++)
    {
    c[i]=d1.a[i]+d2.b[i];
    }}
};

int main()
{
    demo1 d1;
    demo2 d2;
    demo3 d3;

    d1.input();
    d2.input();
    d3.input();

    d3.sum(d1,d2);

    d3.display();
}