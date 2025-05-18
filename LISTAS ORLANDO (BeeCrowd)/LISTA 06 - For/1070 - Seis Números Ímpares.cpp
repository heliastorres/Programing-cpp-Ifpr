#include <iostream>
using namespace std;

int main () {

    int i, cont = 1, valor;

    cin >> valor;

    if (valor %2 != 0) {
        for (i = valor; cont <= 6; i += 2) {
        cout << i << endl;
        cont++;
    }
    } else {
        for (i = valor + 1; cont <= 6; i += 2) {
        cout << i << endl;
        cont++;
    }
    }

    return 0;
}