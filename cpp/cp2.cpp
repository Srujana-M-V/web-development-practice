#include<iostream>
using namespace std;
class employee{
    public:
    string name;
    float salary;
    void setdata(string name, float salary){
        this->name=name;
        this->salary=salary;
    }
    void showdata(){
        cout<<"name is:"<<name<<endl;
        cout<<"salary is:"<<salary<<endl;
    }
};
int main(){
    employee e;
    e.setdata("srujana",567888.90);
    e.showdata();
    return 0;
}