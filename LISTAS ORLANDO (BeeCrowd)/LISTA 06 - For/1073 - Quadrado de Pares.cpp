#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int valor, i;

    cin >> valor;

    for (i = 1; i <= valor; i++) {
        if (i %2 == 0) {
            cout << i << "^2 = " << i*i << endl;
        }
    }
 
    return 0;
}