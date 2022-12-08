#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    float salarioFuncionario = 0;

    cout << "Qual o salario do funcionario?" << endl;
    cin  >> salarioFuncionario;

    if (salarioFuncionario < 500){
        cout << "O funcionario recebeu um aumento de 30\%\ seu salario sera " << (salarioFuncionario * 0.3) + salarioFuncionario<< endl;
    }else{
        cout << "O funcionario nao tem direito ao aumento de 30\%\ ";
    }
}