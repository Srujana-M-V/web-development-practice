#include<iostream>
using namespace std;
class employee{
    public:
    virtual void showsalary(){
        cout<<"the salary is:"<<endl;
    }
};
class fulltime:public employee{
    public:
    void showsalary(){
        cout<<"the salary in fulltime is 500000"<<endl;
    }
};
class parttime:public employee{
    public:
    void showsalary(){
        cout<<"the salary in fulltime is 500000"<<endl;
    }
};
int main(){
    employee *p;
    fulltime f;
    p=&f;
    p->showsalary();
    parttime t;
    p=&t;
    p->showsalary();
    return 0;
}
