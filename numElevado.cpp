#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <math.h>
using namespace std;


int main() {
    float num1 = 0;
    float num2 = 0;

    cout << "Digite um numero" << endl;
    cin  >> num1;

    cout << "Digite outro numero" << endl;
    cin  >> num2;

    float exponencial = pow(num1, num2);
    cout << num1 << " ^ " << num2 << " = " << exponencial;
}