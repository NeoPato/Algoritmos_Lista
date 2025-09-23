#include <iostream>
using namespace std;

int main() {

    int x, y;
    
    while (true){
        cout << "Digite dois numeros: " << endl;
        cin >> x >> y;
        
        if ( x > y ) {
            cout << "DECRESCENTE!" << endl;
        }
        else if ( x < y ){
            cout << "CRESCENTE!" << endl;
        }
        else {
            break;
        }
    }
    
    return 0;
}