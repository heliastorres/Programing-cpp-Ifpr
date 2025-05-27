#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int idade, soma = 0, count = 0;
    double media = 0;

    cout << fixed << setprecision(2);

    cin >> idade;

    while (idade > 0) {
        soma += idade;
        count++;
        cin >> idade;
    }

    media = (soma*1.0)/(count*1.0);

    cout << media << endl;
    
    return 0;
}