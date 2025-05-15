#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    double qtd, op;

    cin >> op;
    cin >> qtd;

    if (op == 1) {
        cout << fixed << setprecision(2) << "Total: R$ " << (4*qtd) << endl;
    }
    else if (op == 2) {
        cout << fixed << setprecision(2) << "Total: R$ " << (4.5*qtd) << endl;
    }
    else if (op == 3) {
        cout << fixed << setprecision (2) << "Total: R$ " << (5*qtd) << endl;
    }
    else if (op == 4) {
        cout << fixed << setprecision(2) << "Total: R$ " << (2*qtd) << endl;
    }
    else if (op == 5) {
        cout << fixed << setprecision(2) << "Total: R$ " << (1.5*qtd) << endl;
    }
    
    return 0;
}