#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    string nome = "";
    char sexo = ' ';

    cout << "Informe seu nome \n";
    getline(cin, nome);

    cout << "Informe seu sexo [F/M] \n";
    cin  >> sexo;

    sexo = toupper(sexo);
    if (sexo == 'F'){
        cout << "Ilma. Sra. " << nome << " seja bem-vinda";
    }
    else if (sexo == 'M') {
        cout << "Ilmo. Sr. " << nome <<  " seja bem-vindo";
    }
    
}