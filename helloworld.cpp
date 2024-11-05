#include <iostream>
#include <cmath> 
#include <string>
using namespace std;

int main2()
{
    int a, b;
    cout << "Ilk Numaryi Gir:";
    cin >> a;
    cout << "Ikinci Numarayi Gir: ";
    cin >> b;

    char operation;
    cout << "Yapmak Istediginiz Islemi Secin [*, +, -, /, ra, rb]: ";
    cin >> operation;

    float result;
    switch (operation) {
    case '+':
        result = a + b;
        cout << "Sonuc: " << result << endl;
        break;

    case '^':
        result = pow(a, b);
        cout << "Sonuc: " << result << endl;
        break;

    case 'ra':
        if (a >= 0) {
            result = sqrt(a);
            cout << "Sonuc: " << result << endl;
        }
        else {
            cout << "Pozitif Bir Sayi Olmalidir" << endl;
        }
        break;

    case 'rb':
        if (b >= 0) {
            result = sqrt(b);
            cout << "Sonuc: " << result << endl;
        }
        else {
            cout << "Pozitif Bir Sayi Olmalidir" << endl;
        }
        break;

    case '-':
        result = a - b;
        cout << "Sonuc: " << result << endl;
        break;

    case '/':
        if (b != 0) {
            result = static_cast<float>(a) / b;
            cout << "Sonuc: " << result << endl;
        }
        else {
            cout << "0 A BOLME ISLEMI YOKTUR!" << endl;
        }
        break;

    case '*':
        result = a * b;
        cout << "Sonuc: " << result << endl;
        break;

    default:
        cout << "Yanlis Secim!" << endl;
        break;
    }

    return 0;
}
