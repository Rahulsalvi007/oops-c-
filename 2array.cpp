// #include<iostream>   2 array input display
// using namespace std;
// class array
// {
//     int a[5],b[5],i;
//     public:
//     void input();
//     void display();
// };

// void array::input()
// {
//     for(i=0;i<5;i++)
//     {
//         cout<<"Enter first array:";
//         cin>>a[i];
//     }
//     for(i=0;i<5;i++)
//     {
//         cout<<"Enter second array:";
//         cin>>b[i];
//     }    
// }

// void array::display()
// {
//     for(i=0;i<5;i++)
//     {
//     cout<<"\t"<<a[i];
//     }
//     for(i=0;i<5;i++)
//     {
//     cout<<"\t"<<b[i];
//     }
// }
// int main()
// {
//     array d;
//     d.input();
//     d.display();
// }

                                 //addition 2 array in 3 arra


#include<iostream>
using namespace std;

class addition
{
    int a[5],b[5],c[5],i;
    public:
    void input();
    void display();
    void sum();

};
void addition::sum()
    {
        for(i=0;i<5;i++)
        c[i]=a[i]+b[i];
        
    }

void addition::input()
{
    cout<<"enter first array";
    for(i=0;i<5;i++)
    cin>>a[i];

    cout<<"enter second array";
    for(i=0;i<5;i++)
    cin>>b[i];
}

void addition::display()
{
    cout<<"SUM IS :";
    for(i=0;i<5;i++)
    cout<<"\t"<<c[i];
}

int main()
{
    addition d;
    d.input();
    d.sum();
    d.display();
}