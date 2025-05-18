#include <iostream>
using namespace std;

int main () {

    int i, valor;

    cin >> valor;

    for (i = 1; i <= valor; i += 2) {
        cout << i << endl;
    }

    return 0;
}