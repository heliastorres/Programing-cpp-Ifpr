#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a, i;

    cin >> a;

    if (a % 2 == 0) {
        for (i = 0; i <= a; i += 2) {
            cout << i << endl;
        }
    } else {
        for (i = 0; i < a; i += 2) {
            cout << i << endl;
        }
    }

    return 0;
}

