#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    int n, horas;
    double valorhora, salario;
    
    cin >> n >> horas >> valorhora;
    
    salario = horas*valorhora;
    
    cout << "NUMBER = " << n << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << salario << endl;
 
    return 0;
}