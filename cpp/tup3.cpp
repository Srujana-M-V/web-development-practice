#include<iostream>
using namespace std;
class shape{
    public:
    virtual void showarea(){
        cout<<"the shapes and the areas"<<endl;
    }
};
class rectangle:public shape{
    public:
    int length;
    int breadth;
    void showarea(){
        cout<<"enter the values for length and breadth of rectangle:";
        cin>>length>>breadth;
        cout<<"the area of the rectangle is:"<<length*breadth<<endl;
    }
    };
class square:public shape{
    public:
    int length;
    void showarea(){
        cout<<"enter the values for length of square :";
        cin>>length;
        cout<<"the area of the square is:"<<length*length<<endl;
    }
};
int main(){
    shape *p;
    rectangle r;
    p=&r;
    p->showarea();
    square s;
    p=&s;
    p->showarea();
    return 0;
}