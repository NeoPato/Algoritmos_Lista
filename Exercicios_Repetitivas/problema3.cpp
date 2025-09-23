#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    int n;
    
    cout << "Digite a senha: ";
    cin >> n;
    do{
        
        if(n != 2002){
            cout << "Senha Invalida! Tente novamente: ";
            cin >> n;
        }
        if(n == 2002){
            cout << "Acesso permitido!" << endl;
        }
            
    }while (n != 2002);

    return 0;
}