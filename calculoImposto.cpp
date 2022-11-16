#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    string nomeCompleto = "";
    float salarioBruto = 0;

    cout << "Digite o nome completo do funcionario" << endl;
    getline(cin, nomeCompleto);
    cout << "Digite o salario bruto do funcionario " << endl;
    cin  >> salarioBruto;
    cout << "Seja bem vindo(a) " << nomeCompleto << endl;
    cout << "O valor do INSS sera " << (8 * salarioBruto)/100 << endl;
    cout << "O valor do IR sera " << (15 * salarioBruto)/100 << endl;
}