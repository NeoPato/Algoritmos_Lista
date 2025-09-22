#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    float produto[5] = {5.00, 3.50, 4.80, 8.90, 7.32};
    int codigo, quant;

    cout << fixed << setprecision(2);

    cout << "Codigo do produto comprado: ";
    cin >> codigo;
    cout << "Quantidade comprada: ";
    cin >> quant;

    cout << "Valor a pagar: R$ " << produto[codigo-1] * quant << endl;
    
    return 0;
}
