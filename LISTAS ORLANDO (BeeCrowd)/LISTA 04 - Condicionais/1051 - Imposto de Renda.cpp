#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    double salario, imposto = 0.00;
    
    cin >> salario;

    cout << fixed << setprecision(2);
    
    if (salario <= 2000.00) {
        cout << "Isento" << endl;
    }
    else if (salario >= 2000.01 and salario <= 3000.00) {
        imposto = (salario - 2000.00)  * 0.08;
        cout << "R$ " << imposto << endl;
    }
    else if (salario >= 3000.01 and salario <= 4500.00) {
        imposto = 1000.00 * 0.08;
        imposto += (salario - 3000.00)  * 0.18;
        cout << "R$ " << imposto << endl;
    }
    else if (salario > 4500.00) {
        imposto = 1000.00 * 0.08;
        imposto += 1500.00 * 0.18;
        imposto += (salario - 4500.00)  * 0.28;
        cout << "R$ " << imposto << endl;
    }
    
 
    return 0;
}