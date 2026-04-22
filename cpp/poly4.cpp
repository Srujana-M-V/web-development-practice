#include<iostream>
using namespace std;
class shape {
public:
    virtual void area() {
        cout << "the areas of the shapes" << endl;
    }
};
class square : public shape {
    int a;
public:
    square(int side) {  
        a = side;
    }
    void area() override {   
        cout << "the area of square: " << a * a << endl;
    }
};

class rectangle : public shape {
    int l, b;
public:
    rectangle(int length, int breadth) {  
        l = length;
        b = breadth;
    }
    void area() override {   
        cout << "the area of rectangle: " << l * b << endl;
    }
};
int main() {
    shape* s;
    square q(4);
    rectangle r(3, 5);
    s = &r;
    s->area();   
    s = &q;
    s->area();   
    return 0;
}
