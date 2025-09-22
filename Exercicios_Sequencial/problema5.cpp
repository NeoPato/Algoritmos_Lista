#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double troco, valorPago, valorProduto, unidadeProduto;
    cout << "digite o valor do produto: ";
    cin >> valorProduto;
    cout << "Digite a quantidade de produtos: ";
    cin >> unidadeProduto;
    cout << "Digite o valor pago: ";
    cin >> valorPago;
    troco = valorPago - (valorProduto * unidadeProduto);
    system("cls");
    if (valorPago < valorProduto * unidadeProduto)
    {   
        cout << "Valor pago insuficiente para cobrir o custo do produto." << endl;
        cout << "Valor restante a pagar: R$ " << troco;
    }
    else if (valorPago > valorProduto * unidadeProduto) {
        cout << "Troco a devolver: R$ " << troco;
    }
    else {
        cout << "Valor pago exato, sem troco a devolver." << endl;
    }
    
    
    return 0; 
}

