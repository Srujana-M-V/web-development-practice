//operators using switch cases
// switch cases on days 
#include <iostream>
//switch cases
using namespace std;
int main(){
    int a,b;
    char x;
    cout<<"enter 2 numbers"<<endl;
    cin>>a>>b;
    cout<<"enter an operator (+,-,%,*) "<<endl;
    cin>>x;
    
    switch(x){
        case '+':
        cout<<"the sum of a and b is"<< a + b <<endl;
        break;
        case '-':
        cout<<"the sub of a and b is"<< a - b <<endl;
        break;
        case '*':
        cout<<"the multiplication of a and b is"<< a * b <<endl;
        break;
        case '/':
            if (b != 0) {
                cout << "The division of a and b is: " << a / b << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        case '%':
            if (b != 0) {
                cout << "The modulus of a and b is: " << a % b << endl;
            } else {
                cout << "Error: Modulus by zero is not allowed." << endl;
            }
            break;
        default:
        cout<<"invalid operator"<<endl;
    }
    return 0;
}


