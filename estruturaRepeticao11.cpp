#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    float nota  = 0;
    float media = 0;
    float soma = 0;

    for (int i = 1; i <= 5; i++){
        cout << "Nota aluno " << i << ":" << endl;
        cin  >> nota;

        soma = soma + nota;
    }
    media = soma/5;
    cout << "A media dos alunos foi " << media;
    
}