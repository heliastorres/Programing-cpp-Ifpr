#include <iostream>
using namespace std;

int main() {

    int i, valor, soma = 0;

    for (i = 1; i <= 10; i++) {
        cin >> valor;
        soma = soma + valor;
    }

    cout << "A soma foi " << soma << endl;
    

    return 0;
}