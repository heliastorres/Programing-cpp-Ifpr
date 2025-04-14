#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
 
int main() {
 
    int X;
    double Y, R;
    
    cin >> X >> Y;
    
    R = X/Y;
    
    cout << fixed << setprecision(3) << R << " km/l" << endl;
    
 
    return 0;
}