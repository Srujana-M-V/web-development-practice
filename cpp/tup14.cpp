//Default Template Parameters
#include<iostream>
using namespace std;
template <typename T1=string,typename T2=int,typename T3=int>
class student{
    public:
    T1 name;
    T2 age;
    T3 marks;
    student(T1 x, T2 y, T3 z) {
    name = x;
    age = y;
    marks = z;
}
    void show(){
        cout<<"name of the student is:"<<name<<endl;
        cout<<"age of the student is:"<<age<<endl;
        cout<<"marks of the student is:"<<marks<<endl;   
    }
};
int main(){
    student<>s1("srujana",20,98);
    s1.show();
    student<int, float, char> s2(10, 5.5, 'A');
    s2.show();
    return 0;
}