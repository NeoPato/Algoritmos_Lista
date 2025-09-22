#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    
    float distancia[3], maior;

    cout << "Digite as tres distancias: " << endl;
    for (int i = 0; i < 3; i++) {
        cin >> distancia[i];
    }
    sort (distancia, distancia + 3);
    maior = distancia[2];
    cout << fixed << setprecision(2) << "MAIOR DISTANCIA = " << maior << endl;

    return 0;
}
