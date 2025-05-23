#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string nome1, nome2, nome3;
    
    cin >> nome1 >> nome2 >> nome3;
    
    if (nome1 == "vertebrado" && nome2 == "ave" && nome3 == "carnivoro") {
        cout << "aguia" << endl;
    } 
    else if (nome1 == "vertebrado" && nome2 == "ave" && nome3 == "onivoro") {
        cout << "pomba" << endl;
    } 
    else if (nome1 == "vertebrado" && nome2 == "mamifero" && nome3 == "onivoro") {
        cout << "homem" << endl;
    } 
    else if (nome1 == "vertebrado" && nome2 == "mamifero" && nome3 == "herbivoro") {
        cout << "vaca" << endl;
    } 
    else if (nome1 == "invertebrado" && nome2 == "inseto" && nome3 == "hematofago") {
        cout << "pulga" << endl;
    } 
    else if (nome1 == "invertebrado" && nome2 == "inseto" && nome3 == "herbivoro") {
        cout << "lagarta" << endl; // Corrigido de "largata" para "lagarta"
    } 
    else if (nome1 == "invertebrado" && nome2 == "anelideo" && nome3 == "hematofago") {
        cout << "sanguessuga" << endl;
    } 
    else if (nome1 == "invertebrado" && nome2 == "anelideo" && nome3 == "onivoro") {
        cout << "minhoca" << endl;
    } 
    

    return 0;
}