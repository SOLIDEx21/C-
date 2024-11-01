#include <iostream>
#include <cmath> 
using namespace std;

int main() 
{
    int a, b;
    cout << "Ilk Numaryi Gir: ";
    cin >> a; 
    cout << "Ikinci Numarayi Gir: ";
    cin >> b; 

    char operation;
    cout << "CHOOSE OPERATION [*, +, -, /,]: ";
    cin >> operation; 

    float result; 

    
    switch (operation) {
        case '+':
            result = a + b;
            cout << "Result: " << result << endl;
            break;

        case '-':
            result = a - b;
            cout << "Result: " << result << endl;
            break; 

        case '/':
            if (b != 0) { 
                result = static_cast<float>(a) / b; 
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl; 
            }
            break; 

        case '*':
            result = a * b; 
            cout << "Result: " << result << endl;
            break; 
        default:
            cout << "Yanlis Secim!" << endl; 
            break; 
    }

    return 0; 
}
