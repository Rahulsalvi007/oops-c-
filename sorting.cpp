#include<iostream>
using namespace std;
template<class test>
class array{
    int i,temp,j;
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
        cout<<"\narray elements is =>";
        for(i=0;i<5;i++)
        cout<<"\t"<<a[i];
    }

    void sorting()
    {
        cout<<"\nsorting elements is=>";
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(a[i]<a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        for(i=0;i<5;i++)
        cout<<"\t"<<a[i];
    }
};

int main()
{  
    array<int>d1;
    d1.input();
    d1.output();
    d1.sorting();
}