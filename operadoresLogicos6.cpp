#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Digite o primeiro numero inteiro..." << endl;
    cin  >> a;

    cout << "<digite o segundo valor inteiro..." << endl;
    cin  >> b;

    cout << "Digite o terceito valor inteiro..." << endl;
    cin  >> c;

    int soma = a + b;
    if (soma < c){
        cout << "A soma de " << a << " + " << b << " e menor que " << c;
    }else {
        cout << "Nenhuma das opcoes";
    }
}