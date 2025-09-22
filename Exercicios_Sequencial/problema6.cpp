#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

int main(){

    float raio, area;
    
    cout << "Digite o valor do raio: ";
    cin >> raio;
    cout << fixed << setprecision(2);
    area = M_PI * pow(raio, 2);

    cout << "Area do circulo: "<< area;
    return 0; 
}

