#include <iostream>
using namespace std;

int main () {

    int x, y, i;

    cin >> x >> y;

    if (x % 2 == 0 && y % 2 == 0) {
        for (i = x+1; i <= y-1; i += 2) {
            cout << i << endl;
        }     
    }
    else if (x % 2 != 0 && y % 2 != 0) {
        for (i = x; i <= y; i += 2) {
            cout << i << endl;
        }
    }
    else if (x % 2 == 0 && y % 2 != 0) {
        for (i = x+1; i <= y; i += 2) {
            cout << i << endl;
        }
    }
    else {
        for (i = x; i < y; i += 2) {
            cout << i << endl;
        }
    }

    return 0;
}