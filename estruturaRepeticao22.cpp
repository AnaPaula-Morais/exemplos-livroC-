#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    // Faça um algoritmo que receba 10 números inteiros. O algoritmo deverá exibir a quantidade de números ímpares inseridos pelo usuário.

    int num = 0;
    int par = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Digite um numero inteiro " << endl;
        cin  >> num;

        if(num % 2 == 0){
            num = par;
            par = par +1;
            
        }
    }
    cout << "A quantidade de numeros pares inseridos pelo usuario foi " << par;
    
}