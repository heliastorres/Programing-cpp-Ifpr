#include <iostream>
#include <iomanip>
using namespace std;

 
int main() {
    
    double A, B, C;
    double atri, acir, atra, aqua, aret;
    
    cin >> A >> B >> C;
    
    atri = (A * C)/2;
    acir =  3.14159 * C * C;
    atra = ((A+B)*C)/2;
    aqua = B * B;
    aret = (A*B);
    
    cout << fixed << setprecision(3) << "TRIANGULO: " << atri << endl;
    cout << fixed << setprecision(3) << "CIRCULO: " << acir << endl;
    cout << fixed << setprecision(3) << "TRAPEZIO: " << atra << endl;
    cout << fixed << setprecision(3) << "QUADRADO: " << aqua << endl;
    cout << fixed << setprecision(3) << "RETANGULO: " << aret << endl;

 
    return 0;
}