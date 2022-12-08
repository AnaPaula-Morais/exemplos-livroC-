#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    float quantAulas = 0;
    float valorHoraAulas = 0;

    cout << "Quantas aulas o professor lecionaou na semana?"  << endl;
    cin  >> quantAulas;

    cout << "Qual o valor da hora/aula do professor?" << endl;
    cin  >> valorHoraAulas;

    float salarioBruto = quantAulas * valorHoraAulas;
    float novoSalario = salarioBruto * 6.2;
    float salarioFinal = novoSalario -((novoSalario * 11.5)/100);



    cout << "O salario bruto do professor e " << salarioBruto << endl;

    cout << "O salario final sera " << salarioFinal << endl; 

}