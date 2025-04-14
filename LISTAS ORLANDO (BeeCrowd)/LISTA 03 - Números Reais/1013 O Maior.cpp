#include <iostream>
#include <cmath>
using namespace std;

 
int main() {
 
    int maiorAB, maior, a, b, c;
    
    cin >> a >> b >> c;
    
    maiorAB = (a+b+abs(a-b))/2;
    maior = (maiorAB+c+abs(maiorAB-c))/2;
    
    cout << maior << " eh o maior" << endl;
 
    return 0;
}