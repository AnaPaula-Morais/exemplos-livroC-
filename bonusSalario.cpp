#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    float salario = 0; 
  

    cout << "Digite o valor do seu salario:" << endl;
    cin  >>  salario;
    
    float bonus = (salario * 0.10) + salario;

    cout << "Seu salario com o bonus de 10\%\ fica " << bonus; 

}