#include <iostream>
using namespace std;

int main() {
 
    int N, hora, hora1, minuto, minuto1, segundo;
    
    cin >> N;
    
    hora = N/3600;
    hora1 = N%3600;
    
    minuto = hora1/60;
    minuto1 = hora1%60;
    
    segundo = minuto1;
    
    cout << hora << ":" << minuto << ":" << segundo << endl;
 
    return 0;
}