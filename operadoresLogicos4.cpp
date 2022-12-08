#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    float salarioFuncionario = 0;
    int tempoServico = 0;

    cout << "Qual o valor do salario do funcionario?" << endl;
    cin  >> salarioFuncionario;

    cout << "Quanto tempo de servico em anos tem o funcionario?" << endl;
    cin  >> tempoServico;

    if (tempoServico >=  10){
        cout << "O funcionario recebera um reajuste de 30\%\, o salario com o aumento sera " << (0.3 * salarioFuncionario) + salarioFuncionario;
    }else if(tempoServico < 10){
        cout << "O funcionario recebera um reajuste de 37,5\%\, o salario com o aumento sera " << (0.375 * salarioFuncionario) + salarioFuncionario;
    }

}