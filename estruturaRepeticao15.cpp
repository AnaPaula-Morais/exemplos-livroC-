#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    // Faça um programa que receba 4 valores inteiros e diga se é divisível ou não por 2.
    
    int num = 0;

    for (int i = 1; i <= 4; i++){
        cout << "Digite um numero inteiro" << endl;
        cin  >> num;

        if (num % 2 == 0){
            cout << "O numero e divisivel por 2"<< endl;
        }else {
            cout << "O numero nao e divisivel por 2" << endl;
        }
    }
    
}