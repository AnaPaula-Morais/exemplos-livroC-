#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    // Faça um programa que rceba 6 numeros. O algoritmo deverá somar, apenas os números pares. Exiba o resultado da soma.
    int num = 0;
    int soma = 0;
    for (int i = 1; i <= 6; i++)
    {
        cout << "Digite um numero inteiro" << endl;
        cin  >> num;
        if(num % 2 == 0){
            soma = soma + num;
        }
        
        
    }
     cout << "A soma dos numeros pares e " << soma;
    
}