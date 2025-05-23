#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int num, i, valor, count_in = 0, count_out = 0;
    
    cin >> num;

    for (i = 1; i <= num; i++) {
        cin >> valor;
        if (valor >= 10 and valor <= 20) {
            count_in++;
        } else {
            count_out++;
        }
    }

    cout << count_in << " in" << endl;
    cout << count_out << " out" << endl;
 
    return 0;
}