#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    int cont, num, dentro = 0, fora = 0;
    
    cout << "Quantos numeros voce vai digitar? ";
    cin >> cont;

    for (int i = 0; i < cont; i++)
    {
        cout << "Digite um numero: ";
        cin >> num;
        if (num < 10 || num > 20){fora++;}
        else {dentro++;}
        
    }
    cout << dentro << " DENTRO" << endl;
    cout << fora << " FORA" << endl;

    return 0;
}