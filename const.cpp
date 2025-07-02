#include <iostream>
using namespace std;

// Base class
class demo1 {
protected:
    int a, b, c; // Use protected to allow access in derived class
public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    void sum() {
        c = a + b;
    }
    void display() {
        cout << "Sum = " << c << endl;
    }
};

// Derived class
class demo2 : public demo1 {
public:
    void sub() {
        c = a - b;
    }
    void mul() {
        c = a * b;
    }
    void div() {
        if (b != 0) {
            c = a / b;
        } else {
            cout << "Division by zero is not allowed." << endl;
        }
    }
};

int main() {
    demo2 obj;
    obj.input();
    obj.sum();
    obj.display();

    obj.sub();
    cout << "Subtraction = " << obj.c << endl;

    obj.mul();
    cout << "Multiplication = " << obj.c << endl;

    obj.div();
    if (obj.b != 0) {
        cout << "Division = " << obj.c << endl;
    }

    return 0;
}