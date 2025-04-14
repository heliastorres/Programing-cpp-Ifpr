#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    string nome;
    double fixsalary, vendas, total;
    
    cin >> nome >> fixsalary >> vendas;
    
    total = fixsalary+(vendas*0.15);
    
    cout << fixed << setprecision(2) << "TOTAL = R$ " << total << endl;
 
    return 0;
}