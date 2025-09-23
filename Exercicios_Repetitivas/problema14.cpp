#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float cont, nume, deno;

    cout << fixed << setprecision(2);

    cout << "Quantos casos voce vai digitar? ";
    cin >> cont;

    for ( int i = 0; i < cont; i++ ) {

        cout << "Entre com o numerador: ";
        cin >> nume;
        cout << "Entre com o denominador: ";
        cin >> deno;
        
        if ( deno > 0 || deno < 0 ) {cout << "DIVISAO = " << nume/deno << endl;}
        else {cout << "DIVISAO IMPOSSIVEL" << endl;}
        
    }
    

    return 0;
}