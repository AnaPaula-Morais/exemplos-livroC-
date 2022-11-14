#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int num1 = 0;
    int num2 = 0;

    cout << "Digite um numero inteiro: \n";
    cin  >> num1;
    cout << "Digite outro numero inteiro: \n";
    cin  >> num2;

    if (num1 > num2){
        cout << "O " << num1 << " e o numero maior";
    }
    if (num2 > num1){
        cout << "O " << num2 << " e o numero maior";
    }
}
