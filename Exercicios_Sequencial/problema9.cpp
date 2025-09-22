#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float A, B, C;
    cout << fixed << setprecision(4);
    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;
    cout << "Digite o valor de C: ";
    cin >> C;

    float AreaQuadrado = A * A;
    float AreaTriangulo = (A * B) / 2;
    float AreaTrapezio = ((A + B) * C) / 2;
    
    system("cls");

    cout << "Area do quadrado: "<< AreaQuadrado << endl;
    cout << "Area do triangulo: " << AreaTriangulo << endl;
    cout << "Area do trapezio: " << AreaTrapezio << endl;

    return 0; 
}

