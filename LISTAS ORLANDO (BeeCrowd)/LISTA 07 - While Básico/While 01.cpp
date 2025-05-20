#include <iostream>
using namespace std;

int main () {

    int valor;
    
    cin >> valor;
    while (valor % 2 != 0) {
        cin >> valor;
    }
    
    cout << valor << endl;

    return 0;
}
