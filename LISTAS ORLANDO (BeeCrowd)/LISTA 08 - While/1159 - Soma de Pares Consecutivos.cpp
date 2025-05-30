#include <iostream>
using namespace std;

int main () {

     int valor, count = 1, soma = 0;
    
    cin >> valor;
    
    while (valor != 0) {
        if (valor % 2 != 0) {
            for (int i = valor + 1; count <= 5; i += 2) {
                count ++;
                soma += i;
            }

        } else {
            for (int i = valor; count <= 5; i += 2) {
                count ++;
                soma += i;
            }
        } 
        cout << soma << endl;
        soma = 0;
        count = 1;
        cin >> valor;       
    }
  
    return 0;
}