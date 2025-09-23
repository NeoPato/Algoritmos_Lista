#include <iostream>
using namespace std;

int main() {
    int n;
    int alcool = 0, gasolina = 0, diesel = 0;

    while (true) {
        cin >> n;

        switch (n) {
            case 1: alcool++; break;
            case 2: gasolina++; break;
            case 3: diesel++; break;
            case 4:
                cout << "MUITO OBRIGADO" << endl;
                cout << "Alcool: " << alcool << endl;
                cout << "Gasolina: " << gasolina << endl;
                cout << "Diesel: " << diesel << endl;
                return 0;
            default:
                break;
        }
    }
}