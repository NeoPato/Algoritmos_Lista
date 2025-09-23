#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    int cont, num;
    
    cout << "Quantos numeros voce vai digitar? ";
    cin >> cont;

    for (int i = 0; i < cont; i++)
    {
        cout << "Digite um numero: ";
        cin >> num;

        if (num == 0) {cout << "NULO" << endl;}
        else if (num % 2 == 0){
            if (num < 0) {cout << "PAR NEGATIVO" << endl;}
            else {cout << "PAR POSITIVO" << endl;}
        }
        else {
            if (num < 0) {cout << "IMPAR NEGATIVO" << endl;}
            else {cout << "IMPAR POSITIVO" << endl;}
        }

        
    }

    return 0;
}