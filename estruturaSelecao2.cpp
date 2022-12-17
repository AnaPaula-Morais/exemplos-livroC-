#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    /*Faça um programa que receba do usuário um número, calcule e mostre:
         0 - fechar programa
         1 - Adição
         2 - Subtração
         3 - Multiplicação
         4 - Divisão
         5 - default: valor inválido
    */

   int num = 0;

   cout << "Digite um numero d 0 a 5" << endl;
   cin  >> num;

   switch (num)
   {
    case 0:
        cout << "Fechar Programa" << endl;
        break;
    case 1:
        cout << "Adição" << endl;
        break;
    case 2:
        cout << "Subtracao" << endl;
        break;
    case 3:
        cout << "Multiplicacao" << endl;
        break;
    case 4:
        cout << "Divisao" << endl;
        break;
    default:
        cout << "Valor invalido" << endl;
        break;
   }
}