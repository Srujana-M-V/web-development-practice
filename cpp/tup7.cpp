#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream in("line.txt");
    string line;
    while(getline(in,line)){
        cout<<"the content in the file is :"<<line<<endl;
    }
    return 0;
}