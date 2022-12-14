#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    // Faça um programa que receba 6 números inteiros e mostre ao usuário se é par ou ímpar.
    int num = 0;
    for (int i = 1; i <= 6; i++)
    {
        cout << "Digite um numero " << endl;
        cin  >> num;

        if (num % 2 == 0){
            cout << "O numero e par" << endl;
        }else {
            cout << "O numero e impar" << endl;
        }
    }
    
}