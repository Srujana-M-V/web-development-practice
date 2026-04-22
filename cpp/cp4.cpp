#include<iostream>
using namespace std;
class calculator{
    public:
    void operate(int a,int b){
        cout<<"multiplication of these numbers are:"<<a*b<<endl;
    }
    void operate(string a,string b){
        cout<<"concatination of these strings are:"<<a+b<<endl;
    }
};
int main(){
    calculator c;
    c.operate(2,3);
    c.operate("srujana","sgr");
    return 0;
}