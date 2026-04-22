#include<iostream>
using namespace std;
class book{
    string name;
    string writer;
    int price;
    public:
    book(string n,string w,int p){
        name=n;
        writer=w;
        price=p;
    }
    void show(){
        cout << "Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Writer: " << writer << endl;
        cout << "Price: " << price << endl;
        cout << "-------------------" << endl;
    }
};
int main(){
    book b1("happiness","mira",300);
    b1.show();
    book *b2=new book("alone","sita",250);
    b2->show();
    cout << "Dynamic book created successfully!" << endl;
    delete b2;
    return 0;
}
    
