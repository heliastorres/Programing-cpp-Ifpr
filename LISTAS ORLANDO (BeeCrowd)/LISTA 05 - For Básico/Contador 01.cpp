#include <iostream>
using namespace std;

int main() {
 
    int i, count = 0;
    double valor;

    for (i = 1; i <= 5; i++) {
        cin >> valor;
        if(valor > 0) {
            count++;
        }
        
    }

    cout << count << endl;
 
    return 0;
}