#include <iostream>
#include <cmath> 
#include <string> 
using namespace std;

int main()
{
    int a, b;
    cout << "Ilk Nümarayi Gir: ";
    cin >> a;
    cout << "Ikinci Nümarayi Gir: ";
    cin >> b;

    string operation;
    cout << "Yapmak Istediginiz Islemi Secin [*, +, -, /, ^, ra, rb ]: ";
    cin >> operation;

    float result;
    if (operation == "+") {
        result = a + b;
        cout << "Sonuc: " << result << endl;
    }
    else if (operation == "ra") {
        if (a >= 0) {
            result = static_cast<float>(sqrt(a));
            cout << "Sonuc : " << result << endl;
        }
        else {
            cout << "Girilen Sayi Pozitif Olmalidir." << endl;
        }
    }
    else if (operation == "rb") {
        if (b >= 0) {
            result = static_cast<float>(sqrt(b));
            cout << "Sonuc : " << result << endl;
        }
        else {
            cout << "Girilen Sayi Pozitif Olmalidir." << endl;
        }
    }
    else if (operation == "^") {
        result = pow(a, b);
        cout << "Sonuc: " << result << endl;
    }
    else if (operation == "-") {
        result = a - b;
        cout << "Sonuc: " << result << endl;
    }
    else if (operation == "/") {
        if (b != 0) {
            result = static_cast<float>(a) / b;
            cout << "Sonuc: " << result << endl;
        }
        else {
            cout << "0 A BOLME ISLEMI YOKTUR!" << endl;
        }
    }
    else if (operation == "*") {
        result = a * b;
        cout << "Sonuc: " << result << endl;
    }
    else {
        cout << "Yanlis Secim!" << endl;
    }

    return 0;
}
