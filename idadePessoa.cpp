#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    int anoAtual = 0;
    int anoNasc = 0;

    cout << "Digite o ano atual:" << endl;
    cin  >> anoAtual;

    cout << "Digite seu ano de nascimento:"<< endl;
    cin  >> anoNasc;

    int idade = anoAtual - anoNasc;

    cout << "Sua idade e " << idade << " anos";
}