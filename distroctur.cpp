#include<iostream>//constructor
using namespace std;

class demo 
{
public:
    demo()
    {
        cout<<"constructor called"<<endl;

    }

   ~ demo()
    {
        cout<<"disstructor called"<<endl;
    }
};

int main()
{
    demo d1;
    demo d2;
    demo d3;

}