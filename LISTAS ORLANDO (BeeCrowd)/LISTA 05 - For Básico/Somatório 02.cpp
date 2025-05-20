#include <iostream>
using namespace std;

int main() {

    int num, i, valor, soma = 0;
    
    cin >> num;

    for (i = 1; i <= num; i++) {
        cin >> valor;
        soma = soma + valor;
    }

    cout << "A soma foi " << soma << endl;

    return 0;
}