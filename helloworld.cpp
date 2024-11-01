#include <iostream>
#include <cmath> 
using namespace std;

int main() 
{
    int a, b;
    cout << "Ilk Numaryi Gir: ";
    cin >> a; // Read value for a
    cout << "Ikinci Numarayi Gir: ";
    cin >> b; // Read value for b

    char operation;
    cout << "CHOOSE OPERATION [*, +, -, /,]: ";
    cin >> operation; 

    float result; // Declare result variable

    // Use a switch statement to perform the operation
    switch (operation) {
        case '+':
            result = a + b;
            cout << "Result: " << result << endl;
            break; // Add break to exit the switch after executing the case

        case '-':
            result = a - b;
            cout << "Result: " << result << endl;
            break; // Add break to exit the switch after executing the case

        case '/':
            if (b != 0) { // Check for division by zero
                result = static_cast<float>(a) / b; // Ensure floating-point division
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl; // Handle division by zero
            }
            break; // Add break to exit the switch after executing the case

        case '*':
            result = a * b; // a ile b nin carpimi
            cout << "Result: " << result << endl;
            break; // Add break to exit the switch after executing the case
        default:
            cout << "Yanlis Secim!" << endl; // Handle invalid operation
            break; // Add break for completeness
    }

    return 0; // Correct return statement
}