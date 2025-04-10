#include <iostream>
using namespace std;
int main() {
 
    int valor, divisao, resto, divisao1, divisao2, divisao3, divisao4, divisao5, divisao6, resto1, resto2, resto3, resto4, resto5, resto6;
    
    cin >> valor;
    cout << valor << endl;
    
    divisao = valor/100;
    resto = valor%=100;
    
    divisao1 = resto/50;
    resto1 = resto %=50;
    
    divisao2 = resto1/20;
    resto2 = resto1%=20;
    
    divisao3 = resto2/10;
    resto3 = resto2%=10;
    
    divisao4 = resto3/5;
    resto4 = resto3%=5;
    
    divisao5 = resto4/2;
    resto5 = resto4%=2;
    
    divisao6 = resto5;
    resto6 = resto5;
    
    cout << divisao << " nota(s) de R$ 100,00" << endl;
    cout << divisao1 << " nota(s) de R$ 50,00" << endl;
    cout << divisao2 << " nota(s) de R$ 20,00" << endl;
    cout << divisao3 << " nota(s) de R$ 10,00" << endl;
    cout << divisao4 << " nota(s) de R$ 5,00" << endl;
    cout << divisao5 << " nota(s) de R$ 2,00" << endl;
    cout << divisao6 << " nota(s) de R$ 1,00" << endl;

    
    
    return 0;
}
