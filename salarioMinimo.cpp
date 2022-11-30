#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    float salarioMin = 0;
    float salarioFuncionario = 0;

    cout << "Qual o valor do salario minimo? \n";
    cin >> salarioMin;
    
    cout << "Qual o salario do funcionario? \n";
    cin >> salarioFuncionario;
    float salariosGanhos = salarioFuncionario / salarioMin;
    if (salarioFuncionario < salarioMin) {
        cout << "O funcionario ganha menos de um salario minino! \n";
    }else if (salarioFuncionario == salarioMin) {
        cout << "O funcionario ganha um salario minino! \n";
    }else{
        cout << "O funcionario ganha " << salariosGanhos << " salarios minimos";
    }


}