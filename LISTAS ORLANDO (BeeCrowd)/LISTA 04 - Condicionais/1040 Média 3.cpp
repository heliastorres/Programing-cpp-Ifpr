#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    double n1, n2, n3, n4;
    double notae, media, mediafinal;

    cin >> n1 >> n2 >> n3 >> n4;

    media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

    cout << fixed << setprecision(1);
    
    cout << "Media: " << media << endl;

    if (media >= 7) {
        cout << "Aluno aprovado." << endl;
    }
    else if (media < 5) {
        cout << "Aluno reprovado." << endl;
    }
    else {
        cout << "Aluno em exame." << endl;
        cin >> notae;
        cout << "Nota do exame: " << notae << endl;
        
        mediafinal = (media + notae)/2;

        if (mediafinal >= 5){
            cout << "Aluno aprovado." << endl;
        }
        else {
            cout << "Aluno reprovado." << endl;            
        }
        
        cout << "Media final: " << mediafinal << endl;
    }
       
    return 0;
}