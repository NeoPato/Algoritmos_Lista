#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float nivel;

    cout << fixed << setprecision(1);

    cout << "Digite a medida da glicose: ";
    cin >> nivel;

    if(nivel <= 100.0){
        cout << "Normal" << endl;
    } 
    else if(nivel > 100.0 && nivel <= 140.0){
        cout << "Elevado" << endl;
    }
    else{
        cout << "Diabetes" << endl;
    }

    return 0;
}
