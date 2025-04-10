#include <iostream>
using namespace std;
 
int main() {
 
    int valor, anos, anosr, meses, mesesr;
    
    cin >> valor;
    
    anos = valor/365;
    anosr = valor%365;
    
    meses = anosr/30;
    mesesr = anosr%30;
    
    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << mesesr << " dia(s)" << endl;
    
 
    return 0;
}