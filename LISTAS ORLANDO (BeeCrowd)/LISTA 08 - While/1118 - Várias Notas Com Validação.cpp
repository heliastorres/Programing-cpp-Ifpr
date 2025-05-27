#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double nota1, nota2, media;
    int op = 1;
    
    cout << fixed << setprecision(2);
    
    while (op == 1) {
    
    cin >> nota1;
    
    while (nota1 < 0 or nota1 > 10) {
        cout << "nota invalida" << endl;
        cin >> nota1;
    }
    
    cin >> nota2;
    
    while (nota2 < 0 or nota2 > 10) {
        cout << "nota invalida" << endl;
        cin >> nota2;
    }
    
    media = (nota1+nota2)/2;
    
    cout << "media = " << media << endl;
    
    cout << "novo calculo (1-sim 2-nao)" << endl;
    cin >> op;
    
    while (op != 1 && op !=2) {
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> op;
    }

}

    return 0;
}