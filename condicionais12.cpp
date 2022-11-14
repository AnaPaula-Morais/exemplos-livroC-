#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int idade = 0;
    cout << "Digite a idade do nadador:" << endl;
    cin  >> idade;

    if(idade >=5 && idade <=7){
        cout << "Infatil A";
    }else if(idade >=8 && idade <=10){
        cout << "Infatil B";
    }else if (idade >=11 && idade <= 13){
        cout << "Juvenil A";
    }else if (idade >= 14 && idade <= 17){
        cout <<"Juvenil C";
    }else if (idade >= 18){
        cout << "Adulto";
    }else{
        cout << "Idade invalida";
    }
}