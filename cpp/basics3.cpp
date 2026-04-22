//LOGICAL OPERATORS
#include<iostream>
using namespace std;
int main(){
    // cpp considers 0 is false and 1 is true
    int a,b,c;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    cout<<"enter the value of c: ";
    cin>>c;
    cout<<"value of a==b is "<<(a==b)<<endl;
    cout<<"value of a<b is "<<(a<b)<<endl;
    cout<<"value of a>b is "<<(a>b)<<endl;
    cout<<"value of a!=b is "<<(a!=b)<<endl;
    cout<<"value of a<=b is "<<(a<=b)<<endl;
    cout<<"value of a>=b is "<<(a>=b)<<endl;
    cout<<"the condition satisfies "<<((a==b) && (a<=b))<<endl;//AND OPERATOR IS USED
    cout<<"the condition satisfies "<<((a==b) && (a<b))<<endl;//AND OPERATOR IS USED
    cout<<"the condition satisfies "<<((a>=b) || (a<b))<<endl;//OR OPERATOR IS USED
    cout<<"the condition satisfies "<<((a==c) && (a<c))<<endl;//AND OPERATOR IS USED
    cout<<"the condition satisfies "<<((a<=c) || (c<b))<<endl;//OR OPERATOR IS USED
    cout<<"the condition satisfies "<<((a==b) && (c<b))<<endl;//AND OPERATOR IS USED
    cout<<"the condition satisfies "<<(!(a==b))<<endl;//NOT OPERATOR IS USED
    return 0;
}