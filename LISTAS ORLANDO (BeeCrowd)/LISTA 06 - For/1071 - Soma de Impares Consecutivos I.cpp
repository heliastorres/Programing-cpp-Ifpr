#include <iostream>
using namespace std;

int main () {

    int i, num1 = 0, num2 = 0, maior = 0, menor = 0, soma = 0;

    cin >> num1 >> num2;

    if(num1 > num2) {
        maior = num1;
        menor = num2;
    } else {
        menor = num1;
        maior = num2;
    }

    if (menor %2 != 0) {
        for (i = menor+2; i < maior; i += 2){
            soma = i + soma;
        }
    }

    if (menor %2 == 0) {
        for (i = menor+1; i < maior; i += 2){
            soma = i + soma;
        }
    }

    cout << soma << endl;


    return 0;
}