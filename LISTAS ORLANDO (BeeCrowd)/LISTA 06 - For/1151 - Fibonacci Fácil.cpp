#include <iostream>
using namespace std;
 
int main() { // code a aprender.
 
    int n;
    
    cin >> n;
    if (n == 1) {
        cout << "0" << endl;
    } else if (n == 2) {
        cout << "0 1" << endl;
    } else {
        cout << "0 1";
        int v1 = 0, v2 = 1, nv;
        for (int i = 0; i < n-2; i++) {
            nv = v1+v2;
            cout << " " << nv;
            v1 = v2;
            v2 = nv;
        }
        cout << endl;
    }
 
    return 0;
}