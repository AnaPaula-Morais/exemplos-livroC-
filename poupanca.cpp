#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    // A fórmula de cálculo é: J = C*i*t. J = juros e o C = capital. O i é a taxa de juros e t é o tempo.
    float valorDepositado = 0;
    
    

    cout << "Qual o valor depositado na poupanca?\n";
    cin  >> valorDepositado;

    float rendimento = valorDepositado * 0.12; 
    float valorTotal = rendimento + valorDepositado;

    cout << "O rendimento da poupanca apos um mes sera de " << rendimento << 
     " reais" << endl;
    cout << "O valor total da poupanca e " << valorTotal << " reais";

}