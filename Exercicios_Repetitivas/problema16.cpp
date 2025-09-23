#include <iostream>
#include <iomanip>
#include <numeric>  
using namespace std;

int main() {

    int cont, n; 
    float animais[3] = {0,0,0};
    char tipo;
    
    int tamanho = sizeof(animais) / sizeof(animais[0]);

    cout << "Quantos casos de teste serao digitados? ";
    cin >> cont;

    for ( int i = 0; i < cont; i++ ){
        cout << "Quantidade de cobaias: ";
        cin >> n;
        cout << "Tipo de cobaia: ";
        cin >> tipo;
        if (tipo == 'C' || tipo == 'c'){animais[0] += n;}
        else if (tipo == 'R' || tipo == 'r'){animais[1] += n;}
        else if (tipo == 'S' || tipo == 's'){animais[2] += n;}
    }
    int total = accumulate(animais, animais + tamanho, 0);

    cout << fixed << setprecision(2);
    cout << "RELATORIO FINAL:" << endl; 
    cout << "Total: "<< total << " cobaias" << endl;
    cout << "Total de coelhos: " << animais[0] << endl;
    cout << "Total de ratos: " << animais[1] << endl;
    cout << "Total de sapos: "<< animais[2] << endl;
    cout << "Percentual de coelhos: " << (animais[0]/total) * 100 << endl;
    cout << "Percentual de ratos: " << (animais[1]/total) * 100 << endl;
    cout << "Percentual de sapos: " << (animais[2]/total) * 100 << endl;
    return 0;
}