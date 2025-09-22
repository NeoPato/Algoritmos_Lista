#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cout << "Primeiro valor: " << endl;
    cin >> a;
    cout << "Segundo valor: " << endl;
    cin >> b;
    cout << "Terceiro valor: " << endl;
    cin >> c;

    int container[3] = {a, b, c};
    sort(container, container + 3);
    
    int menor = container[0];

    cout << "Menor: " << menor << endl;


    return 0;
}
