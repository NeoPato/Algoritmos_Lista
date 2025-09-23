#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    int num = 0;
    do{
        int soma = 0;
        cout << "Digite um numero inteiro: ";
        cin >> num;
        
        if (num > 0){
            if ( num % 2 != 0 ){ num++; soma = num; }
            else{ soma = num;}
            
            for ( int i = 0; i < 4; i++ ) {
                soma += num += 2;
                cout << "SOMA = " << soma << endl;
            }
        }

    }while(num != 0);
    
    return 0;
}