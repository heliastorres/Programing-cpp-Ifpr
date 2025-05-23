#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() {
 
    int num, valor;
    double perC = 0.0, perS = 0.0, perR = 0.0;
    int countR = 0, countS = 0, countC = 0, total = 0;
    string tipo;

    cout << fixed << setprecision(2);

    cin >> num;

    for (int i = 1; i <= num; i++) {
        cin >> valor >> tipo;
        total += valor;
        if (tipo == "R") {
            countR += valor;
        } else if (tipo == "S") {
            countS += valor;
        } else if (tipo == "C") {
            countC += valor;
        }
    }

    perC = (countC / (total * 1.0)) * 100;
    perR = (countR / (total * 1.0)) * 100;
    perS = (countS / (total * 1.0)) * 100;
    
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << countC << endl;
    cout << "Total de ratos: " << countR << endl;
    cout << "Total de sapos: " << countS << endl;
    cout << "Percentual de coelhos: " << perC << " %" << endl; 
    cout << "Percentual de ratos: " << perR << " %" << endl; 
    cout << "Percentual de sapos: " << perS << " %" << endl; 

    return 0;
}