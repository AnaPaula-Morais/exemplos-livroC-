#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    float salarioFuncionario = 0;
    float valorVendas = 0;


    cout << "Digite o salario do funcionario" << endl;
    cin >> salarioFuncionario;

    cout << "Valor total das vendas" << endl;
    cin  >> valorVendas;

    float valorComissao = valorVendas * 0.05;

    float salarioFinal = salarioFuncionario + valorComissao;

    cout << "O valor da comissao e " << valorComissao << " reais" << endl;
    cout << "O salario final e " << salarioFinal << " reais";
}