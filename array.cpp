#include<iostream>
using namespace std;
template<class test>
class array{
    int i;
    test a[5];
    public:
    void input()
    {
        cout<<"enter enformation :"<<endl;
        for(i=0;i<5;i++)
        cin>>a[i];
    }

    void output()
    {
        cout<<"array elements is =>";
        for(i=0;i<5;i++)
        cout<<" "<<a[i]<<endl;
    }
};

int main()
{  
    array<int>d1;
    d1.input();
    d1.output();

    array<float>d2;
    d2.input();
    d2.output();

    array<char>d3;
    d3.input();
    d3.output();

    array<long>d4;
    d4.input();
    d4.output();

}