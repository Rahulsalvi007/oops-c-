#include<iostream>
using namespace std;

class addition
{
    int a[5],i,sum=0;
    public:
    void input();
    void display()
    {
       cout<<"sum is :"<<sum;

    }
    void process();
};

void addition::input()
{
    cout<<"ENTER  ARRAY:";
    for(i=0;i<5;i++)
    cin>>a[i];
}

void addition::process()
{
    for(i=0;i<5;i++)
    sum=sum+a[i];
}


int main()
{
    addition d;
    d.input();
    d.process();
    d.display();
}