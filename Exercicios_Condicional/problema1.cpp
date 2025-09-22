#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float nota1, nota2, media;

    cout << fixed << setprecision(1);

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;

    media = nota1 + nota2;
    cout << "NOTA FINAL = " << media << endl;

    if(media <= 60){
        cout << "REPROVADO" << endl;
    } 

    return 0; 
}

