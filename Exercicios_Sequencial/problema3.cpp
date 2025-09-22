#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int idade, idade2;
    float media;
    string nome, nome2;
    cout << "Digite o nome do aluno: ";
    cin >> nome;
    cout << "Digite a idade do aluno: ";
    cin >> idade;
    system("cls");
    cout << "Digite o nome do aluno: ";
    cin >> nome2;
    cout << "Digite a idade do aluno: ";
    cin >> idade2;
    system("cls");
    media = (idade + idade2) / 2.0;
    cout << "Nome do aluno 1: " << nome << endl << "Idade do aluno 1: " << idade << endl;
    cout << "Nome do aluno 2: " << nome2 << endl << "Idade do aluno 2: " << idade2 << endl;
    cout << "Media das idades: " << media << endl;
    return 0; 
}

