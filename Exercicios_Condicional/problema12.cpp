#include <iostream>
using namespace std;

int main() {
    
    int eixoX, eixoY;

    cout << "Valor de X: ";
    cin >> eixoX;
    cout << "Valor de Y: ";
    cin >> eixoY;

    if (eixoX > 0 && eixoY > 0) {cout << "Q1" << endl;}
    else if (eixoX < 0 && eixoY > 0) {cout << "Q2" << endl;}
    else if (eixoX < 0 && eixoY < 0) {cout << "Q3" << endl;}
    else if (eixoX > 0 && eixoY < 0) {cout << "Q4" << endl;}
    else if (eixoX == 0 && eixoY == 0) {cout << "Origem" << endl;}
    else if (eixoY == 0 && eixoX != 0) {cout << "Eixo X" << endl;}
    else if (eixoX == 0 && eixoY != 0) {cout << "Eixo Y" << endl;}

    return 0;
}
