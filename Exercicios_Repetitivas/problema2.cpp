#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    int n;
    float cont = 0, soma = 0;
    
        cout << "Digite as idades: " << endl;
    
    while (true){
        
        cin >> n;
        
        if ( n >= 0){
            soma += n;
            cont ++;
        }
        else {
            if(soma == 0 ){
                cout << "IMPOSSIVEL CALCULAR" << endl;
            }
            else {
                cout << fixed << setprecision(2) << "MEDIA = " << soma/cont << endl;
            }
            break;
        }
        
    }
    
    return 0;
}