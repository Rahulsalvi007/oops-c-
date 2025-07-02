#include<iostream>
using namespace std;
class demo1
{
    public:
    void show(){
        
        cout << "This is demo1 class." << endl;
    }
};

class demo2 :public demo1
{
    public:
    void display(){
        
        cout << "This is demo2 class." << endl;
    }

};

int main(){
    demo2 d2;

    d2.show();
    d2.display();
    return 0;
}
