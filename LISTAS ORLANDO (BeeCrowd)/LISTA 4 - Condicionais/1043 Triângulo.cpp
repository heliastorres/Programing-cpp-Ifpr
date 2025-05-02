#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() {
 
    double a, b, c;
    double area, perim;
    
    cin >> a >> b >> c;
    
    
    if (a+b <= c || a+c <= b || b+c <= a){
        area = ((a+b)*c)/2;
        cout << fixed << setprecision(1) << "Area = " << area << endl;
    }
    
    else if ((a+b) > c || (a+c) > b || (c+b) > a) {
        perim = a+b+c;
        cout << fixed << setprecision(1) << "Perimetro = " << perim << endl;
    }
    
 
    return 0;
}