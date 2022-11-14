#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int num = 0;

    cout << "Digite um numero inteiro qualquer: \n";
    cin  >> num;
    

    if (num <= 3){
        cout << "O numero digitado foi " << num;
    }
    if (num < 3){
        cout << "O numero " << num << " e menor que 3";
    }

}