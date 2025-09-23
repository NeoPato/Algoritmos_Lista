#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int x, y, soma = 0;

    cout << "Digite dois numeros: " << endl;
    cin >> x >> y;

    int conteiner[2] = {x, y};
    sort(conteiner, conteiner + 2);

    for ( int i = conteiner[0] + 1; i < conteiner[1]; i++) {
        if(i % 2 != 0){soma+=i;}
    }

    cout << "SOMA DOS IMPARES = " << soma << endl;

    return 0;
}