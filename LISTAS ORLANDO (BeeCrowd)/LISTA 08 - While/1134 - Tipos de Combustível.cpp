#include <iostream>
using namespace std;

int main()
{
    int valor, count1 = 0, count2 = 0, count3 = 0;
    
    cin >> valor; 
        
    
    while (valor != 4) {    

        if (valor == 1) {
        count1 += 1;
        } else if (valor == 2) {
            count2 += 1;
        } else if (valor == 3) {
            count3 +=  1;
        }
            cin >> valor;
    }
      
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << count1 << endl; 
    cout << "Gasolina: " << count2 << endl;
    cout << "Diesel: " << count3 << endl;

    return 0;
}