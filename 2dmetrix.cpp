#include<iostream>
using namespace std;
class matrix
{
    int a[3][3],i,j;
    public:
    void input();
    void display();

};

void matrix::input()
{
    cout<<"enter 3*3 matrix";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
}

void matrix::display()
{
    cout<<"display";
    for(i=0;i<3;i++)
    {
        cout<<"\n";
        for(j=0;j<3;j++)
        {
            cout<<"|"<<a[i][j];
    }   }
}

int main()
{
    matrix d;
    d.input();
    d.display();
}