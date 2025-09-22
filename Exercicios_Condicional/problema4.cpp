#include <iostream>

using namespace std;

int main() {
    int n;
    double pagar = 50.0;

    cout << "Digite a quantidade de minutos: ";
    cin >> n;

    if (n > 100) {
        pagar += (n - 100) * 2.0;
        cout << "Valor a pagar: R$ " << pagar << endl;
    }
    else {
        cout << "Valor a pagar: R$ " << pagar << endl;
    }

    return 0;
}
