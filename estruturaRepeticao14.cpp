#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    // Faça um programa que receba 3 valores inteiros e diga se é divisivel ou nao por tres.

    int num = 0;
    int soma = 0;

    for (int i = 1; i <= 3; i++){
        cout << "Digite um numero inteiro" << endl;
        cin  >> num;

        if (num % 3 == 0){
            cout << "O numero e divisivel por 3" << endl;
        }else {
            cout << "O numero nao e divisivel por 3" << endl;
        }

       
    }
    
    
}