#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    int idade = 0;

    cout << "Digite sua idade" << endl;
    cin  >> idade;

    if (idade >= 18) {
        cout << "Voce e maior de idade";
    }else {
        cout << "Voce e menor de idade";
    }
}