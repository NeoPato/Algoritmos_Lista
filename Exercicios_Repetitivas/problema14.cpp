#include <iostream>

using namespace std;

int main() {

    int cont, fatorial = 1;

    cout << "Digite o valor de N: ";
    cin >> cont;

    for ( int i = 1; i <= cont; i++ ) {
        fatorial = fatorial * i;
    }

    cout << "FATORIAL = " << fatorial << endl;

    return 0;
}