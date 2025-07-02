#include<iostream>
using namespace std;
class demo
{
public:
virtual void display()=0;
//{
//cout<<"\ni am";
// }

void show()
{
 cout<<"\n SHOW 1";
 }
 };

class demo1:public demo
{
 public:
void display()
{
 cout<<"\n DISPLAY 2";
 }
 void view()
 {
  cout<<"\n VIEW 2";
  }
  };
 class demo2 :public demo1
 {
 public:
 void display(){
 cout<<"\n DISPLAY";
 }
 void output()
 {
  cout<<"\n rahul";
  }
  };
 int main(){
 demo2 d;
 d.show();

 d.view();

 d.output();

 demo *p;
// p=new demo();
// p->display();
 p=new demo1();
 p->display();
 p=new demo2();
 p->display();
return 0;
 }
