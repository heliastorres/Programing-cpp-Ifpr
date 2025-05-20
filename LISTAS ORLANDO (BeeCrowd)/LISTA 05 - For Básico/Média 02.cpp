#include <iostream>
#include <iomanip>
using namespace std; //error code


int main () {

    int num, i, valor, media = 0, soma = 0, countposi = 0;

    cin >> num;

    for (i = 1; i <= num; i++) {
        cin >> valor;
        if (valor > 0) {
            countposi = valor + countposi;
        }
        soma = soma + countposi;
        media = soma/countposi;
    }
    
    cout << fixed << setprecision(1);

    cout << "A média foi " << media << endl;

    return 0;
}
