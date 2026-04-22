//manipulators
// Online C++ compiler to run C++ program online
#include <iostream>
#include<iomanip>
using namespace std;
int main() {
    int a=25;
    int b=4;
    int c=2345;
    int d=1.23;
    cout<<setw(4)<<a<<endl;
    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;
    cout<<setw(4)<<d<<endl;
    cout<<setw(3)<<a<<endl;
    cout<<setw(3)<<b<<endl;
    cout<<setw(3)<<c<<endl;
    cout<<setw(3)<<d<<endl;
    cout<<setw(8)<<a<<endl;
    cout<<setw(5)<<b<<endl;
    cout<<setw(6)<<c<<endl;
    cout<<setw(7)<<d<<endl;
    return 0;
}