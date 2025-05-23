#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int valor, i;

    cin >> valor;

    for (i = 1; i <= 10000; i++) {
        if (i %valor == 2) {
            cout << i << endl;
        }
    }
 
    return 0;
}