#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    /* Faça um algoritmo para calcular o dobro de um número inteiro, caso seja par e caso
    o dobro seja menor que 10 escreva o seu quadrado.*/

    int num = 0;
    int dobro = 0;
    int quadrado = 0;

    cout << "Digite um numero: \n";
    cin  >> num;
    if (num % 2 == 0){
        dobro = num *2;
        cout << "O dobro do " << num << " e " << dobro << endl;
        if (dobro < 10) {
        quadrado = dobro * dobro;
        cout << "O quadrado do dobro e " << quadrado;
        }
    }
    
}