#include<iostream>
#include<stdlib.h>
using namespace std;
template <class patel>

    void sum(patel a,patel b)
    {
        cout<<"sum is ="<<a+b<<endl;

    }

int main(){
    sum(100,200);
    sum(10.10f,10.10f);
    sum(100000,1000000);
    sum('A','A');
    return 0;
}