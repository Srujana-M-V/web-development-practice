#include<iostream>
using namespace std;
int main(){
    int num[5];
    cout<<"enter array numbers:";
    for(int i=0; i<5; i++){
        cin>>num[i];
    }
    cout<<"array:"<<endl;
    for(int i=0; i<5; i++){
        cout<<num[i]<<" ";
    }
    return 0;
}