#include <iostream>

using namespace std;

int main() {

    int valor1 = 0, valor2 = 0, sum = 0;
    
    
    cin >> valor1 >> valor2;
    
    while ((valor1 != 0 and valor2 != 0) and (valor1 > 0 and valor2 > 0)) {
    
    if (valor2 > valor1) {
       int temp = valor2;
       valor2 = valor1;
       valor1 = temp;
    }
    
    for (int i = valor2; i <= valor1; i++) {
        cout << i << " ";
        sum += i;
    } cout << "Sum=" << sum << endl;
    
    cin >> valor1 >> valor2;
    sum = 0;
    
} 
    return 0;
}