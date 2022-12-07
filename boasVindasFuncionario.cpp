#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    // valor do INSS (8% sobre o salario bruto)
    // valor IR (15 % sobre o salario bruto)
    float salarioBruto = 0;
    string nomeFuncionario = "";


    cout << "Digite o nome completo do funcionario" << endl;
    getline(cin ,nomeFuncionario);

    cout << "Salario bruto do funcionario(a) " << nomeFuncionario << endl;
    cin  >> salarioBruto;

    float valorInss = salarioBruto * 0.08;
    float valorIR = salarioBruto * 0.15;
    float impostos = valorInss + valorIR;
    float salarioLiquido = salarioBruto - impostos;

    cout << "Seja bem vindo(a) " << nomeFuncionario << endl;
    cout << "O valor do INSS e " << valorInss << endl;
    cout << "O valor do IR e " << valorIR << endl;
    cout << "O valor so salrio liquido do funcionario " << nomeFuncionario << " e " << salarioLiquido;


}