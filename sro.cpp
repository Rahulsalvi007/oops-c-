#include<iostream> //warning for (for loop)
using namespace std;

class sro
{
    int a[5],i;
    public:

    void input();

    void output();
};


void sro::input()
{
    for(i=0;i<5;i++)
    {
    cout<<"Enter value:";
    cin>>a[i];
    }
}

void sro::output()
{
    for(i=0;i<5;i++)
    cout<<a[i];
}
int main()
{
    sro d;
    d.input();
    d.output();

}