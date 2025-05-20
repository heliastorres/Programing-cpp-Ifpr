#include <iostream>
using namespace std;
int main() {
 
    int n;
    
    cin >> n;
    
    while (n <= 10 || n >= 20) {
        cin >> n;
    }
    
    cout << n << endl;
 
    return 0;
}