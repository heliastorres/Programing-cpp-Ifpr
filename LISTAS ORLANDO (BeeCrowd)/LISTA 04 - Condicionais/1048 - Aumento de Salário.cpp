#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double salario, novo_salario = 0, reajuste = 0;
    string percentual;
    
    cin >> salario;
    
    cout << fixed << setprecision(2);
    
    if (salario > 0 and salario <= 400.00) {
        novo_salario = salario * 1.15;
        reajuste = novo_salario - salario;
        cout << "Novo salario: " << novo_salario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        percentual = "15 %";
    } else if (salario >= 400.01 and salario <= 800) {
        novo_salario = salario * 1.12;
        reajuste = novo_salario - salario;
        cout << "Novo salario: " << novo_salario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        percentual = "12 %";
    } else if (salario >= 800.01 and salario <= 1200.00) {
        novo_salario = salario * 1.10;
        reajuste = novo_salario - salario;
        cout << "Novo salario: " << novo_salario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        percentual = "10 %";
    } else if (salario >= 1200.01 and salario <= 2000.00) {
        novo_salario = salario * 1.07;
        reajuste = novo_salario - salario;
        cout << "Novo salario: " << novo_salario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        percentual = "7 %";
    } else if (salario > 2000.00) {
        novo_salario = salario * 1.04;
        reajuste = novo_salario - salario;
        cout << "Novo salario: " << novo_salario << endl;
        cout << "Reajuste ganho: " << reajuste << endl;
        percentual = "4 %";
    }
    cout << "Em percentual: " << percentual << endl;

    return 0;
}