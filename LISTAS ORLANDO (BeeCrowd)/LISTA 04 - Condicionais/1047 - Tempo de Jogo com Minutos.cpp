#include <iostream>
using namespace std;

int main()
{
    int horaI, minI, horaF, minF, inicial, final;
    
    cin >> horaI >> minI >> horaF >> minF;
    
    inicial = horaI * 60 + minI;
    final = horaF * 60 + minF;
    
    if (final <= inicial) {
        final += 24 * 60;
    }
    
    cout << "O JOGO DUROU " << (final - inicial) / 60 << " HORA(S) E ";
    cout << (final - inicial) % 60 << " MINUTO(S)" << endl;

    return 0;
}