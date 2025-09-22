#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    float temp;
    char tipo;

    cout << fixed << setprecision(2);

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> tipo;
    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> temp;

    if ( tipo == 'F' ){
        temp = 5 * (temp - 32) / 9;
        cout << "Temperatura equivalente em Celsius: " << temp << endl; 
    }
    else {
        temp = (9 * temp) / 5 + 32;
        cout << "Temperatura equivalente em Fahrenheit: " << temp << endl;
    }
    

    return 0;
}
