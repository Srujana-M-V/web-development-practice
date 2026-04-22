//default templates
#include<iostream>
using namespace std;
template <typename T1=int, typename T2=string>
class box{
    public:
    T1 space ;
    T2 spice;
};
int main(){
    box<> b1;
    box<float,int>b2;
    b1.space=25;
    b1.spice="chilli";
    cout<<"space in box is:"<<b1.space<<endl;
    cout<<"spice in box is:"<<b1.spice<<endl;
    b2.space=2.45;
    b2.spice=25;
    cout<<"space in box is:"<<b2.space<<endl;
    cout<<"spice in box is:"<<b2.spice<<endl;
    return 0;
}