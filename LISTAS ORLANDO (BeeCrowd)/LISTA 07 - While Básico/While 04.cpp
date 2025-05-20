#include <iostream>
using namespace std;

int main() {
 
    int n, valor = 1;
    
    cin >> n;
    
    
    while (n > valor) {
        cout << valor << endl;
        valor++;
    }
    
    cout << n << endl;
 
    return 0;
}