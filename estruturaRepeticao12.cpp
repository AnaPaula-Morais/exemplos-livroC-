#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    float nota = 0;
    float soma = 0;


    for (int i = 1; i <= 4; i++){
        cout << "Nota " << i << " : " << endl;
        cin  >> nota;

        soma = soma + nota;

    }

    cout << "A media do aluno foi " << soma/4;
    

}



