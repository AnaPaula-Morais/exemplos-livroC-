#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    // a=(b*h)/2
    float base = 0;
    float altura = 0;
    float area = 0;

    cout << "Digite a base do retangulo: " << endl;
    cin  >> base;
    cout << "Digite a altura do retangulo: " << endl;
    cin  >> altura;

    area = (base * altura) / 2;

    cout << "A area do retangulo e: " << area; 
}