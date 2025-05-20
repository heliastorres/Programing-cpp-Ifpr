#include <iostream>
using namespace std;

int main() {
 
    int num, i, pares = 0, valor;

    cin >> num;
    
    for (i = 1; i <= num; i++) {
        cin >> valor;
        if (valor %2 == 0) {
            pares++;
        }
    } 

    cout << pares << endl;


    return 0;
}