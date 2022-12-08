#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    int num = 0;

    cout << "Digite um numero inteiro..." << endl;
    cin  >> num;

    if (num == 10){
        cout << "Voce acertou o numero e igual a 10";
    }else {
        cout << "Voce errou o numero e diferente de 10";
    }
}