#include <iostream>
#include <iomanip>
#include <numeric>  

using namespace std;

int main() {

    int quant, cont = 0, peso[3] = {2,3,5};
    int tamanho = sizeof(peso) / sizeof(peso[0]);

    cout << "Quantos casos voce vai digitar? ";
    cin >> quant;

    float numbers[quant];

    do{   

        float soma = 0;
        cout << "Digite tres numeros: " << endl;
        for (int i = 0; i < 3; i++){
            cin >> numbers[i];
            soma += numbers[i] * peso[i];
        }
        cout << fixed << setprecision(1)<< "MEDIA = " << soma/accumulate(peso, peso + tamanho, 0) << endl;
        cont++;

    }while ( cont != quant );
    

    return 0;
}