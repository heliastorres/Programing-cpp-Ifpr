#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int num, i;
    double valor1, valor2, valor3;

    cout << fixed << setprecision(1);

    cin >> num;

    for (i = 1; i <= num; i++) {
        cin >> valor1 >> valor2 >> valor3;
        cout << ((valor1*2) + (valor2*3) + (valor3*5))/10 << endl;
    }
 
    return 0;
}