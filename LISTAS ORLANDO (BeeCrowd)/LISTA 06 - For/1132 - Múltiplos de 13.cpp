#include <iostream>
using namespace std;

int main () {

    int valor1, valor2, soma = 0;

    cin >> valor1 >> valor2;
        
    if (valor1 > valor2) {
        int n = valor1;
        valor1 = valor2;
        valor2 = n;
    }

    for (int i = valor1; i <= valor2; i++) {
        if (i % 13 != 0) {
            soma += i;
        }
    }

    cout << soma << endl;
    
    return 0;
}