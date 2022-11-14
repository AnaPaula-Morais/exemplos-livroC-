#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    float a = 0, b = 0, c = 0;
    cout << "Descubra  se o triangulo e isosceles, equilatero ou escaleno!" << endl;
    cout << "Digite tres valores (separados por um enter) e descubra:" << endl;
    cin  >> a;
    cin  >> b;
    cin  >> c;

    if(a == b || a == c || b == c){
        cout << "O triangulo e isosceles";
    } else if (a == b && b == c){
        cout << "Otriangulo e equilatero";
    }else {
        cout << "O triangulo e escaleno";
    }

}