#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    // Programa que verifica o dia da semana, a partir de um numero digitado pelo usuário

    int numDiaSemana = 0;

    cout << "Digite um numero de 1 a 7" << endl;
    cin  >> numDiaSemana;

    switch (numDiaSemana)
    {
    case 1:
        cout << "Domingo" << endl;
        break;
    case 2:
        cout << "Segunda-Feira" << endl;
        break;
    case 3:
        cout << "Terça-feira" << endl;
        break;
    case 4:
        cout << "Quarta-feira" << endl;
        break;
    case 5:
        cout << "Quinta-feira" << endl;
        break;
    case 6:
        cout << "Sexta-feira" << endl;
        break;
    case 7:
        cout << "Sabado" << endl;
        break; 
    default:
        cout << "Valor invalido" << endl;
        break;
    }
}