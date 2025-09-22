#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float totalKm, totalGasto, consumoMedio;
    cout << fixed << setprecision(3);
    cout << "Digite o total de Km rodados: ";
    cin >> totalKm;
    cout << "Digite o total gasto com combustivel: ";
    cin >> totalGasto;
    consumoMedio = totalKm / totalGasto;
    cout << "Consumo medio do veiculo: " << consumoMedio << " Km/L";
    return 0; 
}

