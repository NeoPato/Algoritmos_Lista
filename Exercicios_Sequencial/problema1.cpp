#include <iostream>
using namespace std;

int main(){
    float largura, comprimento, valorMetroQuadrado;
    cout << "Digite a largura: ";
    cin >> largura;
    cout << "Digite o comprimento: ";
    cin >> comprimento;
    cout << "Digite o valor do metro quadrado: ";
    cin >> valorMetroQuadrado;

    cout << "Area do Terreno: " << largura * comprimento << endl;
    cout << "Preço do Terreno: " << largura * comprimento * valorMetroQuadrado << endl;
    return 0;
}

