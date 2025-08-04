#include <iostream>
using namespace std;
int main()
{
    int v[1000], x = 0, t;
    
    cin >> t;
    
    for (int i = 0; i < 1000; i++) {
        cout << "N[" << i << "] = " << x << endl;
        x++;
        if (x == t) {
            x = 0;
        }
    }
    

    return 0;
}