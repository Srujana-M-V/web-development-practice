#include<iostream>
using namespace std;
class animal{
    public:
    virtual void sound(){
        cout<<"animals"<<endl;
    }
};
class dog:public animal{
    public:
    void sound(){
        cout<<"Dog barks"<<endl;
    }
};
class cat:public animal{
    public:
    void sound(){
        cout<<"cat meow meow"<<endl;
    }
};
int main(){
    animal* p;
    dog d;
    cat c;
    p = &d;     
    p->sound(); 

    p = &c;     
    p->sound();
    return 0;
}

