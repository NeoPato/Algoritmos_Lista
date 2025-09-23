#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float nota[2], soma = 0;
    int cont = 0;
    
    cout << "Digite a primeira nota: ";
    cin >> nota[cont];

    do{
        
        if (nota[cont] < 0 || nota[cont] > 10)
        {
            cout << "Valor invalido! Tente novamente: ";
            cin >> nota[cont];
        }
        else {
            soma += nota[cont];
            cont ++;
            break;
        }
        

    }while(true);

    cout << "Digite a segunda nota: ";
    cin >> nota[cont];

    do{
        
        if (nota[cont] < 0 || nota[cont] > 10)
        {
            cout << "Valor invalido! Tente novamente: ";
            cin >> nota[cont];
        }
        else {
            soma += nota[cont];
            cont ++;
            break;
        }
        

    }while(true);

    cout << "MEDIA = " << soma/cont << endl;

    return 0;
}