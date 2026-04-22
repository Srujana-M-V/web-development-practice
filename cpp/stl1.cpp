#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<< v[i] << " ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    int x;
    for(int i=0; i<4; i++){
        cin>>x;
        v.push_back(x);
    }
    display(v);
    return 0;
}