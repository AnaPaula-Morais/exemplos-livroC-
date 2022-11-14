#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
   
    int categoria = 0;
    cout << "=================================================" << endl;
    cout << "               AUXILIO MENSAL                    " << endl;
    cout << "    Categoria 1 - casadas sem filhos             " << endl;
    cout << "    Categoria 2 - casadas ou nao, com filhos     " << endl;
    cout << "    Categoria 3 - solteiras, sem filhos          " << endl;
    cout << "=================================================" << endl;

    cout << "Digite o numero da categoria que se encontra a funcionaria: [1, 2 ou 3]\n";
    cin  >> categoria;
    // salario base 1000
    if (categoria == 1)
    {
        cout << "A funcionaria teve um acressimo de 15%. Seu salario sera de " << (0.15  * 1000) + 1000; 
    }else if (categoria == 2){
        cout << "A funcionaria tera um aumento de 35%. Seu salario sera de " << (0.35 * 1000) + 1000;
    }else{
        cout <<"A funcionaria nao tera direito ao auxilio";
    }
    



    
}