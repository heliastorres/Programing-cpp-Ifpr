#include <iostream>
using namespace std;

int main() {

    int valor;

    cin >> valor;

    while (valor > 0) {

        for (int i = 1; i <= valor; i++) {
            
            if (i != valor){
            cout << i << " ";
            } else {
                cout << i;
            }
        } cout << endl;
        cin >> valor;
    }
    
    return 0;
}