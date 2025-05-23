#include <iostream>
using namespace std;

int main () {

    int num, valor1, valor2, soma_impar;

    cin >> num;

    for (int i = 1; i <= num; i++) {
        cin >> valor1 >> valor2;
        soma_impar = 0;

        if (valor2 > valor1) {
            while (++valor1 < valor2) {
            if (valor1 %2 != 0) {
                soma_impar += valor1;
            }
        }
            
        } else if (valor1 > valor2) {
            while (++valor2 < valor1) {
            if (valor2 %2 != 0) {
                soma_impar += valor2;
            }
        }
            
        }

        cout << soma_impar << endl;
    }

    
    return 0;
}