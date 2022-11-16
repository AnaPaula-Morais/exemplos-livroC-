#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    float salario = 0,
          aluguel = 0,
          contaAgua = 0,
          contaLuz = 0,
          alimentacao =  0;

    cout << "Digite o valor do seu salario:" << endl;
    cin  >> salario; 

    cout << "Quanto voce paga de aluguel:" << endl;
    cin  >> aluguel;

    cout << "Qual o valor da suaconta de agua:" << endl;
    cin  >> contaAgua;

    cout << "Qual o valor da sua conta de luz:" << endl;
    cin  >> contaLuz;

    cout << "Quanto voce gasta com alimentacao:" << endl;
    cin  >> alimentacao;

    float despesa = aluguel + contaAgua + contaLuz + alimentacao;
    float saldo = salario - despesa;

    cout << "Seu gasto total foi de " << despesa << " seu saldo e " << saldo;


}