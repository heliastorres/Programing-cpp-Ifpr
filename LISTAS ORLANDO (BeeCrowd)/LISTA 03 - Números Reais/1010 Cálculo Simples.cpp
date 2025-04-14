#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    
    int npeca1, npeca2, qtdpeca1, qtdpeca2;
    double valor1, valor2, total;
 
    cin >> npeca1 >> qtdpeca1 >> valor1;
    cin >> npeca2 >> qtdpeca2 >> valor2;
    
    total = (qtdpeca1 * valor1) + (qtdpeca2*valor2);
    
    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << total << endl;
 
    return 0;
}