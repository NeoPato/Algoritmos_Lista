#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    float salario, valores_porcentagem[4]={0.20, 0.15, 0.10, 0.05}, aumento = 0, porcentagem;
    
    cout << fixed << setprecision(2);

    cout << "Digite o salario da pessoa: ";
    cin >> salario;

    if ( salario <= 1000 ) {
        porcentagem = 100 * valores_porcentagem[0];
        aumento = salario * valores_porcentagem[0];
        salario = salario + aumento;
    }
    else if (salario > 1000 && salario <= 3000){
        porcentagem = 100 * valores_porcentagem[1];
        aumento = salario * valores_porcentagem[1];
        salario = salario + aumento;
    }
    else if ( salario > 3000 && salario <= 8000) {
        porcentagem = 100 * valores_porcentagem[2];
        aumento = salario * valores_porcentagem[2];
        salario = salario + aumento;
    }
    else if (salario > 8000){
        porcentagem = 100 * valores_porcentagem[3];
        aumento = salario * valores_porcentagem[3];
        salario = salario + aumento;
    }
    cout << "Novo salario = R$ " << salario << endl;
    cout << "Aumento = R$ " << aumento << endl;
    cout << "Porcentagem = " << int(porcentagem) << " %" << endl;
    return 0;
}
