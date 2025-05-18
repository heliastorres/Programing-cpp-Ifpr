#include <iostream>
using namespace std;

int main () {

    int i, cont = 0;
    double valor;
    
    for (i = 1; i <= 6; i++) {
        cin >> valor;
        if (valor > 0) {
            cont++;
        }
    }
    cout << cont << " valores positivos" << endl;

    return 0;
}