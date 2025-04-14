#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main() {
 
    int tempogasto, velomedia;
    double litros, distancia;
    
    cin >> tempogasto; // em horas
    cin >> velomedia; // em km/h
    
    distancia = tempogasto * velomedia;
    litros = distancia/12;
    
    cout << fixed << setprecision(3) << litros << endl;
 
    return 0;
}