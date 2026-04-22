//IF, ELSE IF, AND ESLE.
#include <iostream>
using namespace std;
int main() {
    int age;
    string name;
    
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your name: ";
    cin >> name;
    if (age == 19 && name == "srujana") {
        cout << "You are allowed to party!" << endl;
    } else if (age > 18) {
        cout << "You are allowed, but you're not Srujana!" << endl;
    }  else if (age > 18 && name!="srujana") {
        cout << "You are allowed, but you're not Srujana!" << endl;
    } else {
        cout << "You are not allowed to party!" << endl;
    }
    