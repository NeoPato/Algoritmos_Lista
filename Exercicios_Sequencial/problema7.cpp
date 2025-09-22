#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string nomeFuncioanrio;
    double salarioPorHora, salarioTotal;
    int horasTrabalhadas;
    cout << fixed << setprecision(2);
    cout << "Digite o nome do funcionario: ";
    cin >> nomeFuncioanrio;
    cout << "Digite o salario por horas trabalhadas de " << nomeFuncioanrio << ": ";
    cin >> salarioPorHora;
    cout << "Digite o numero de horas trabalhadas de " << nomeFuncioanrio << ": ";
    cin >> horasTrabalhadas;
    salarioTotal = salarioPorHora * horasTrabalhadas;
    system("cls");
    cout << "Funcionario: " << nomeFuncioanrio << endl;
    cout << "Horas trabalhadas: " << horasTrabalhadas << endl;
    cout << "Salario por hora: R$ " << salarioPorHora << endl;
    cout << "Salario Total: R$ " << salarioTotal << endl;
    return 0; 
}

