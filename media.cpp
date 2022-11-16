#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    float num1 = 0, num2  = 0, num3 = 0, num4 = 0;

    cout << "Digite o primeiro numero" << endl;
    cin  >> num1;

    cout << "Digite o segundo numero" << endl;
    cin  >> num2;

    cout << "Digite o terceiro numero" << endl;
    cin  >> num3;

    cout << "Digite o quarto numero" << endl;
    cin  >> num4;

    float media = (num1 + num2 + num3 + num4) / 4;

    cout << "A media dos numeros digitados foi " << media; 
}