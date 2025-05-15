#include <iostream>
using namespace std;

int main () {
    
    int inicio, fim, tempo;

    cin >> inicio >> fim;

    if (fim > inicio) {
        tempo = fim - inicio;
        cout << "O JOGO DUROU " << tempo <<" HORA(S)" << endl;
    }
    else if (fim <= inicio) {
        tempo = (24 - inicio) + fim;
        cout << "O JOGO DUROU " << tempo << " HORA(S)" << endl;
    }
    
    return 0;
}