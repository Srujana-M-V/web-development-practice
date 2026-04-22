#include <iostream>
using namespace std;
int main() {
    int category, conversionType;
    double value, result;
    cout << "Select category:\n";
    cout << "1. Temperature\n2. Length\n3. Weight\n";
    cout << "Enter your choice (1-3): ";
    cin >> category;

    switch (category) {
        case 1:
            cout << "Select conversion:\n";
            cout << "1. Celsius to Fahrenheit\n";
            cout << "2. Fahrenheit to Celsius\n";
            cout << "Enter your choice: ";
            cin >> conversionType;
            cout << "Enter value: ";
            cin >> value;
            switch (conversionType) {
                case 1: 
                    result = (value * 9/5) + 32;
                    cout << value << " Celsius = " << result << " Fahrenheit\n";
                    break;
                case 2: 
                    result = (value - 32) * 5/9;
                    cout << value << " Fahrenheit = " << result << " Celsius\n";
                    break;
                default:
                    cout << "Invalid conversion choice!\n";
            }
            break;
        case 2:
            cout << "Select conversion:\n";
            cout << "1. Meters to Kilometers\n";
            cout << "2. Kilometers to Meters\n";
            cout << "Enter your choice: ";
            cin >> conversionType;

            cout << "Enter value: ";
            cin >> value;

            switch (conversionType) {
                case 1: 
                    result = value / 1000;
                    cout << value << " Meters = " << result << " Kilometers\n";
                    break;
                case 2:
                    result = value * 1000;
                    cout << value << " Kilometers = " << result << " Meters\n";
                    break;
                default:
                    cout << "Invalid conversion choice!\n";
            }
            break;
        case 3:
            cout << "Select conversion:\n";
            cout << "1. Grams to Kilograms\n";
            cout << "2. Kilograms to Grams\n";
            cout << "Enter your choice: ";
            cin >> conversionType;

            cout << "Enter value: ";
            cin >> value;

            switch (conversionType) {
                case 1: 
                    result = value / 1000;
                    cout << value << " Grams = " << result << " Kilograms\n";
                    break;
                case 2: 
                    result = value * 1000;
                    cout << value << " Kilograms = " << result << " Grams\n";
                    break;
                default:
                    cout << "Invalid conversion choice!\n";
            }
            break;

        default:
            cout << "Invalid category choice!\n";
    }
    return 0;
}
