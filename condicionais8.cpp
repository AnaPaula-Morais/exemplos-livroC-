#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int sobremesa = 0;
    cout << "============================ \n";
    cout << "|   RSTAURANTE VIDA DOCE   | \n";
    cout << "|--------------------------| \n";
    cout << "|  Escolha sua sobremesa   | \n";
    cout << "|  1- Mousse   2-Sorvete   | \n";
    cout << "|  3- MilkShake 4- Sunday  | \n";
    cout << "============================ \n";

    do
    {
        cout << "Digite o numero referente a sobremesa que deseja: \n";
        cin  >> sobremesa;

        if(sobremesa == 1){
            cout << "Seu Mousse esta sendo preparado";
        }else if(sobremesa == 2){
            cout << "Seu sorvete logo será entregue";
        }else if (sobremesa == 3){
            cout <<"Seu MilkShake esta sendo preparado";
        }else if (sobremesa == 4){
            cout << "Seu Sunday esta sendo preparado";
        }else {
            cout << "Opcao invalida \n";
    }
    } while (sobremesa > 4 || sobremesa <= 0);
    
}

