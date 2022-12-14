#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    // Faça um algoritmo que receba 6 numeros inteiros. O algoritmo deverá somar, apenas, os números ímpares. Exiba o resultado da soma.

    int num = 0;
    int soma = 0;

    for (int i = 1; i <= 6; i++)
    {
        cout << "Digite um numero" << endl;
        cin  >> num;

        if(num % 2 == 1){
            soma = soma + num;
        }
    }
    cout << "A soma dos numeros imapares e " << soma;
}