#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double a, b, c;
    double maior, meio, menor;

    cin >> a >> b >> c;

    if (a>b && a>c) {
        maior = a;
        meio = b;
        menor = c;
    }
    else if (b>a && b>c) {
        maior = b;
        meio = a;
        menor = c;
    }
    else {
        maior = c;
        meio = a;
        menor = b;
    }


    if (maior < (meio+menor)) {
    
                
         if (pow(maior,2) == (pow(meio,2) + pow(menor,2))) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        else if (pow(maior,2) > (pow(meio,2) + pow(menor,2))) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        else  if (pow(maior,2) < (pow(meio,2) + pow(menor,2))) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
            if (maior == meio && meio == menor) {
                cout << "TRIANGULO EQUILATERO" << endl;
            }
            else if ((maior == meio && meio != menor) || (maior == menor && menor != meio) || (meio == menor && menor != maior)) {
                cout << "TRIANGULO ISOSCELES" << endl;
            }
    }
    else {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    

    return 0;
}