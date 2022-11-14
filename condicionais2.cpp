#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int idade = 0;

    cout << "Informe sua idade: \n";
    cin  >> idade;

    if (idade > 15){
        cout << "Voce pode fazer musculacao!";
    }
    else {
        cout << "Voce nao tem idade para fazer musculacao!";
    }
    
}