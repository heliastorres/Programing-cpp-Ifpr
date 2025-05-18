#include <iostream>
using namespace std;

int main () {

    int i, valor = 0, countpares = 0, countimpar = 0, countposi = 0, countnega = 0;

    for(i = 1; i <= 5; i++) {
        cin >> valor;
        if(valor %2 == 0){
            countpares++;
        } if (valor %2 != 0) {
            countimpar++;
        } if (valor > 0) {
            countposi++;
        } if (valor < 0) {
            countnega++;
        }
    }
    cout << countpares << " valor(es) par(es)" << endl;
    cout << countimpar << " valor(es) impar(es)" << endl;
    cout << countposi << " valor(es) positivo(s)" << endl;
    cout << countnega << " valor(es) negativo(s)" << endl;

    return 0;
}