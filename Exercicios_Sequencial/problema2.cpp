#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float base, altura;
    cout << "Digite a base do retângulo: ";
    cin >> base;
    cout << "Digite a altura do retângulo: ";
    cin >> altura;
    cout << "Area do retângulo: " << base * altura << endl; 
    cout << "Perimetro do retângulo: " << 2 * (base + altura) << endl;
    cout << "Diagonal do retângulo: " << sqrt(pow(base,2) + pow(altura,2)) << endl;
    return 0; 
}

