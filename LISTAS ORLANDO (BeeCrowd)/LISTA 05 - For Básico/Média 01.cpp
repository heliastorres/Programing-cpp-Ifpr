#include <iostream>
#include <iomanip>
using namespace std;


int main () {

    int i, valor, soma = 0;
    double media;

    for (i = 1; i <= 10; i++) {
        cin >> valor;
        soma = (soma + valor);
        media = soma/10.0;
    }
        cout << fixed << setprecision(2) << "A média foi " << media << endl;

    return 0;
}
