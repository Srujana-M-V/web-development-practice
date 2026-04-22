/*#include<iostream>
using namespace std;
class square{
    public:
    void area(int a){
        cout<<"area of the square is:"<<a*a<<endl;
    }
};
class triangle{
    public:
    void area(int a,int b){
        cout<<"area of the triangle is:"<<a*b<<endl;
}
};
int main(){
    square s;
    triangle t;
    s.area(5);
    t.area(10,6);
    return 0;
}
    */
#include<iostream>
using namespace std;
class shape{
    public:
    void area(int a){
        cout<<"the area of the square is:"<<a*a<<endl;
    }
    void area(int a,int b){
        cout<<"the area of the triangle is:"<<a*b<<endl;
    }
};
int main(){
    shape s;
    s.area(15);
    s.area(12,6);
    return 0;
}