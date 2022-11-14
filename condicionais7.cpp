#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int codCargo = 0;
    float salarioAtual = 0;

    cout << "Digite o codigo referente ao cargo do funcionario: \n";
    cin  >> codCargo;

    cout << "Digite o salario atual deste funcionario \n";
    cin  >>  salarioAtual;

    if(codCargo == 1){
        cout << "O secretario tem um salario de " << salarioAtual << 
        " e tera um aumento de 10'%' ficando agora salario de " << (salarioAtual * 0.1) + salarioAtual; 
    }else if(codCargo == 2){
        cout << "O professor tem um salario de " << salarioAtual << 
        " e tera um aumento de 25'%' ficando agora com salario de " << (salarioAtual * 0.25) + salarioAtual;
    }else if(codCargo == 3){
        cout << "O coordenador tem um salario de " << salarioAtual << 
        " e tera um aumento de 11'%' ficando agora com salario de " << (salarioAtual * 0.11) + salarioAtual;
    }else if(codCargo == 4){
        cout << "O diretor nao tera aumento";
    }else if(codCargo == 5){
        cout << "O atendente tem um salario de " << salarioAtual << 
        " e tera um aumento de 15'%' ficando agora com salario de " << (salarioAtual * 0.15) + salarioAtual;
    }


}