//                                     //virtual funcation

// #include<iostream>
// using namespace std;
// class demo1
// {
//     public:

//    virtual void sum()                     
//     {
//         cout<<"sum"<<endl;
//     }
// };
// class demo2:public demo1
// {
//     public:
//     void sum()
//     {
//         cout<<"sum1"<<endl;
        
//     }
// };
// class demo3:public demo2
// {
//     public:
//     void sum()
//     {
//         cout<<"sum2"<<endl;
//     }
// };
 
// int main(){
//     demo1 *p;
//     p=new demo1();
//     p->sum();
//     p=new demo2();
//     p->sum();
//     p=new demo3();
//     p->sum();
//     return 0;
// }

#include<iostream>
using namespace std;
class demo1 
{
    public:
    void class1()
    {
        cout<<"demo1:"<<endl;
    }
    virtual void display()
    {
        cout<<"DISPALY1"<<endl;
    }
};
class demo2:public demo1
{
    public:
    void class2()
    {
        cout<<"demo2:"<<endl;
    }

    void display()
    {
        cout<<"DISPALY2"<<endl;
    }
};
class demo3 :public demo2
{
    public:
    void class3()
    {
        cout<<"demo3:"<<endl;
    }

    void display()
    {
        cout<<"DISPALY3"<<endl;
    }
};
int main()
{
    demo1 *p;
    p=new demo1();
    p->display(); 
    p=new demo2();
    p->display();
    p=new demo3();
    p->display();
}