#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    int inicio, fim;

    cout << "Hora inicial: ";
    cin >> inicio;
    cout << "Hora final: ";
    cin >> fim;

    if (fim > inicio) {
        cout << "O JOGO DUROU " << fim - inicio << " HORA(S)" << endl;
    }
    else if (fim == inicio){
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }
    else {
        cout << "O JOGO DUROU " << 24 - (inicio - fim) << " HORA(S)" << endl;
    }


    return 0;
}
