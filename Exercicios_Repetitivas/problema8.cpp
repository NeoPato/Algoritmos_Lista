#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    int num = 0;
    
    cout << "Deseja a tabuada para qual valor? ";
    cin >> num;

    for ( int i = 1; i < 11; i++ ) {
        cout << num << " x " << i << " = " << num * i << endl; 
    }

    return 0;
}