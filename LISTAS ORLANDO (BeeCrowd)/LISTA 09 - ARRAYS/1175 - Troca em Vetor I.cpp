#include <iostream>
using namespace std;

int main() {

    int v[20], i, j;
    
    for (i = 0; i < 20; i++) {
        cin >> v[i];
    }
    
    for (i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << v[19 - i] << endl;
    }

    return 0;
}