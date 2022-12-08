#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    float num1 = 0;
    float num2 = 0;

    cout << "Digite um numero..." << endl;
    cin  >> num1;

    cout << "Digite outro numero..." << endl;
    cin  >> num2;

    if (num1 > num2){
        cout <<  num1 << " e maior que " << num2;
    }else if(num1 < num2){
        cout << num1 << " e menor que " << num2;
    }else if(num1 != num2){
        cout << "Os numeros sao diferentes";
    }else if(num1 == num2){
       cout << "Os numero sao igual"; 
    }else if (num1 <= num2){
        cout << num1 << " e menor ou igual a " << num2;
    }else if (num1 >= num2){
        cout << num1 << " e maior ou igual a " << num2;
    }

}