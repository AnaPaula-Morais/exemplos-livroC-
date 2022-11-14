#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    char estadoCivil = ' ';
    char temFilhos = ' ';
    float salario = 0;

    cout << "Qual seu estado civil? solteiro [S] casado [C] \n";
    cin  >> estadoCivil;

    cout << "Tem filhos? [S/N] \n";
    cin  >> temFilhos;

    cout << "Qual seu salario? \n";
    cin  >> salario;

    estadoCivil = toupper(estadoCivil);
    temFilhos = toupper(temFilhos);
    if(estadoCivil == 'S') {
        cout << "Voce nao tem direito ao bonus natalino";
    }
    else if (estadoCivil != 'S' && temFilhos == 'S'){
        cout << "Voce recebeu um bonus de 20%. Seu salario sera " << (salario * 0.20) + salario;
    }
    else if (estadoCivil != 'S' && temFilhos == 'N'){
        cout << "Voce reccebeu um bonus de 15%. Seu salario sera " << (salario * 0.15) + salario;
    }
}