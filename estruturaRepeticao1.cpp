#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    float nota1 = 0, nota2 = 0;    
        
    for(int i=1; i <=5; i++){
        cout << "Primeira nota: " << endl;
        cin  >> nota1;
        cout << "Segunda nota: " << endl;
        cin  >> nota2;
        float media = (nota1 + nota2)/2;
        cout << "O aluno " << i << " teve media igual a: " << media << endl;
    }
}