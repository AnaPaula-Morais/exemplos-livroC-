#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int codigo = 0;
    cout << "Digite o codigo do produto [1,2,3,4...]" << endl;
    cin  >> codigo;

    if(codigo == 1){
        cout << "Vestuario";
    }else if (codigo == 2){
        cout << "Higiene Pessoal";
    }else if (codigo == 3){
        cout << "limpeza";
    }else if (codigo == 4){
        cout << "Alimentos";
    }else {
        cout << "Codigo invalido";
    }


}