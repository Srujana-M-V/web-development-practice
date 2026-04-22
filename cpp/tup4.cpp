#include<iostream>
using namespace std;
class employee{
    public:
    virtual void calculatesalary(){
        cout<<"the salary of the employee"<<endl;
    }
};
class fulltime:public employee{
    public:
    float basic;
    float bonus;
    void calculatesalary(){
        cout<<"enter the basic amt and bonus:";
        cin>>basic>>bonus;
        cout<<"the salary of fulltime employee is:"<<basic+bonus<<endl;
    }
    };
class intern:public employee{
    public:
    float hourly_rate;
    int hours_worked;
    void calculatesalary(){
        cout<<"enter hours_worked and hourly_rate for work:";
        cin>>hours_worked>>hourly_rate;
        cout<<"the salary of intern is:"<<hourly_rate*hours_worked<<endl;
    }
};
int main(){
    employee *p;
    fulltime f;
    p=&f;
    p->calculatesalary();
    intern i;
    p=&i;
    p->calculatesalary();
    return 0;
