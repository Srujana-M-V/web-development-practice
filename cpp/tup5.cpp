#include<iostream>
using namespace std;
class shape{
    public:
    virtual float area()=0;
};
class rectangle:public shape{
    public:
    float length,breadth;
    float area(){
        cout<<"enter length:";
        cin>>length;
        cout<<"enter breadth:";
        cin>>breadth;
        float area=length*breadth;
        cout<<"area of rectangle is:"<<area<<endl;
        return area;
    }
};
class circle:public shape{
    public:
    float radius;
    float area(){
        cout<<"enter radius:";
        cin>>radius;
        float area=3.14*radius*radius;
        cout<<"area of circle is:"<<area<<endl;
        return area;
    }
};
class triangle:public shape{
    public:
    float base,height;
    float area(){
        cout<<"enter base:";
        cin>>base;
        cout<<"enter height:";
        cin>>height;
        float area=0.5*base*height;
        cout<<"area of triangle is:"<<area<<endl;
        return area;
    }
};
int main(){
    #include<iostream>
using namespace std;
class shape{
    public:
    virtual float area()=0;
};
class rectangle:public shape{
    public:
    float length,breadth;
    float area(){
        cout<<"enter length:";
        cin>>length;
        cout<<"enter breadth:";
        cin>>breadth;
        float area=length*breadth;
        cout<<"area of rectangle is:"<<area<<endl;
        return area;
    }
};
class circle:public shape{
    public:
    float radius;
    float area(){
        cout<<"enter radius:";
        cin>>radius;
        float area=3.14*radius*radius;
        cout<<"area of circle is:"<<area<<endl;
        return area;
    }
};
class triangle:public shape{
    public:
    float base,height;
    float area(){
        cout<<"enter base:";
        cin>>base;
        cout<<"enter height:";
        cin>>height;
        float area=0.5*base*height;
        cout<<"area of triangle is:"<<area<<endl;
        return area;
    }
};
int main(){
float rect_area, circ_area, tri_area;
shape *p;
rectangle r;
p = &r;
rect_area = p->area();
circle c;
p = &c;
circ_area = p->area();
triangle t;
p = &t;
tri_area = p->area();
if(rect_area > circ_area && rect_area > tri_area)
    cout << "Rectangle has the largest area" << endl;
else if(circ_area > tri_area)
    cout << "Circle has the largest area" << endl;
else
    cout << "Triangle has the largest area" << endl; 
}