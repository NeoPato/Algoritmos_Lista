#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;

    cout << fixed << setprecision(4);

    cout << "Coeficiente a: ";
    cin >> a; 
    cout << "Coeficiente b: ";
    cin >> b; 
    cout << "Coeficiente c: ";
    cin >> c;

    float delta = b*b - 4*a*c;

    if (a == 0 || delta < 0) {
        cout << "Esta equacao nao possui raizes reais" << endl;
    } else {
        float x1 = (-b + sqrt(delta)) / (2*a);
        float x2 = (-b - sqrt(delta)) / (2*a);

        cout << "X1 = " << x1 << endl;
        cout << "X2 = " << x2 << endl;
    }

    return 0;
}
