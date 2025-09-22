#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int duracaoSegundos;
    float horas, minutos, segundos;
    cout << "Digite a duracao em segundos: ";
    cin >> duracaoSegundos;

    horas = floor(duracaoSegundos / 3600);
    minutos = floor((duracaoSegundos - (horas * 3600)) / 60);
    
    segundos = duracaoSegundos % 60;

    cout << "Horas: " << horas << ":" << minutos << ":" << segundos << endl; 
    return 0; 
}

