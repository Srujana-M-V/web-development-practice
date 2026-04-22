#include<iostream>
using namespace std;
template <typename T>
class triple{
    public:
    T a;
    T b;
    T c;
};
int main(){
    triple<int>t1;
    t1.a=2;
    t1.b=4;
    t1.c=6;
    triple<string>t2;
    t2.a="srujana";
    t2.b="M";
    t2.c="V";
    cout<<t1.a<<endl;
    cout<<t1.b<<endl;
    cout<<t1.c<<endl;
    cout<<t2.a<<endl;
    cout<<t2.b<<endl;
    cout<<t2.c<<endl;
    return 0;
}