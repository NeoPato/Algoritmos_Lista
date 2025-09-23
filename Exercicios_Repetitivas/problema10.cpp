#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    int x;
    
    cout << "Digite o valor de X: ";
    cin >> x;

        if (x % 2 == 0){ x--; }
        for (int i = 1; i <= x; i+=2){

        cout << i << endl;

        }

    return 0;
}