#include<iostream>
#include<stdlib.h>
using namespace std;
template <class patel,class patel2>

    void sum(patel a,patel2 b)
    {
        cout<<"sum is ="<<a+b<<endl;

    }

int main(){
    sum(5,5.5f);
    sum(10.5f,5);
    sum(100000,1000000);
    sum('A',5);//a=>65
    return 0;
}