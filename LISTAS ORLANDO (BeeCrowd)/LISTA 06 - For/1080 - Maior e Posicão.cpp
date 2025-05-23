#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int valor = 0, p = 0, maior = 0, pmaior = 0;
    
    for (int i = 1; i <= 100; i++) {
        cin >> valor;
        p++;
        if (valor >= maior) {
            maior = valor;
            pmaior = p;
        }
    }

    cout << maior << endl;
    cout << pmaior << endl;
 
    return 0;
}