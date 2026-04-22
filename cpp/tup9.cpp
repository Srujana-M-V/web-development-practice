#include<iostream>
using namespace std;

template <typename T>
class Pair {
public:
    T first;
    T second;
};

int main() {
    Pair<int> p1;
    p1.first = 10;
    p1.second = 20;

    Pair<string> p2;
    p2.first = "srujana";
    p2.second = "M V";

    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;

    return 0;
}
/*#include<iostream>
using namespace std;
template<typename T1,typename T2>
void show(T1 a,T2 b){
     cout << a << " " << b << endl;
}
int main(){
    show(10, "hello");
    show(2.5, 99);
    show("Srujana", 3.14);

}*/
