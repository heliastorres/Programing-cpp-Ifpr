#include <iostream>
using namespace std;

int main() {
    
    int a, i;

    cin >> a;

    if (a % 2 == 0) {
        for (i = 1; i <= a; i += 2) {
            cout << i << endl;
        }
    }
    

    return 0;
}
