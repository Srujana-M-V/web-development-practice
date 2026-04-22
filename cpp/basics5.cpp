6
#include <iostream>
using namespace std;
int main() {
    /*
    TYPE CASTING = CONVERTING ONE DATA TYPE INTO OTHER*/
    int a,b;
    float c;
    cout<<"Enter the value for a:"<<endl;
    cin>>a;
    cout<<"Enter the value for b:"<<endl;
    cin>>b;
    cout<<"\nEnter the value for c:"<<endl;
    cin>>c;
    cout<<"converting value from int to float : "<<float(a)<<endl;
    cout<<"converting value from int to float: "<<float(b)<<endl;
    cout<<"converting value from float to int: "<<int(c)<<endl;
    cout<<"converting value from int to float: "<<a+float(b)<<endl;
    cout<<"converting value from int to float: "<<float(a)+float(b)<<endl;
    cout<<"converting value from int to float: "<<a+int(c)<<endl;
}
