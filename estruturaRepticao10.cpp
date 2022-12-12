#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    //Somatória de 10 numeros digitados pelo usuário
    int soma = 0;
    

    for (int i = 1; i <= 10; i++){
        int num = 0;
        
        cout << "Digite o " << i << " numero" << endl;
        cin  >> num;

        soma = soma + num; 
    }

    cout << "A soma dos 10 numeros e " << soma;
    
    
    
    
}