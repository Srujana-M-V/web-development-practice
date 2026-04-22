#include<iostream>
using namespace std;

class student {
public:
    int roll;

    void setroll(int roll) {
        this->roll = roll;
    }

    void showroll() {
        cout << "the rollnumber of the student is: " << roll;
    }
};

int main() {
    student s;
    s.setroll(78);
    s.showroll();
    return 0;
}

