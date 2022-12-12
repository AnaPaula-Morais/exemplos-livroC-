#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    // numeros multiplos de tres
    // Um número é múltiplo de 3 quando o resto de sua divisão por 3 é zero

    for (int i = 0; i < 100; i++)
    {
        if (i % 3 == 0){
            cout << " " << i;
            
        }
    
    }
    cout << endl;
    for (int i = 0; i <=100; i++){
        cout << "=";
    }
    cout << endl;
    for (int i = 0; i <= 50; i++)
    {
        if(i % 2 == 0){
            cout << " " << i;
        }
    }
    


}