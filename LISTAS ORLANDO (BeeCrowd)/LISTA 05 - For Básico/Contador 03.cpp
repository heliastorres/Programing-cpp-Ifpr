#include <iostream>
using namespace std;

int main() {
 
    int i, valor, num, countposi = 0, countnega = 0;

    cin >> num;

    for (i = 1; i <= num; i++) {
        cin >> valor;
        if (valor > 0) {
            countposi++;
        } else if (valor < 0) {
            countnega++;
        }
    }

    cout << countposi << " valores positivos" << endl;
    cout << countnega << " valores negativos" << endl;

    return 0;
}