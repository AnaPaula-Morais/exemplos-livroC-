#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    int num = 0;
    int soma = 0;

    for (int i = 1; i <= 10; i++){
        cout << "Digite um numero: " << endl;
        cin  >> num;

        if (num > 10){
            soma = soma + num;
        }
       
    }
     

    cout << "Somatorio dos numeros maiores que 10: " << soma;

    
}