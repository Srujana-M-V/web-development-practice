#include<iostream>
using namespace std;
template <typename T>
void mySwap(T &a, T &b){
   T temp=a;
   a=b;
   b=temp;
}
int main(){
    int a=20;
    int b=30;
    mySwap(a,b);
    cout<<a<<"and"<<b;
}