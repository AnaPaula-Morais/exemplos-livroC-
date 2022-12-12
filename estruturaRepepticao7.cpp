#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    int x = 0;

    cout << "Digite um numero menor que 100 para iniciar a contagem:\n";
    cin  >> x;

    for (int i = x; i <= 100; i++)
    {
        cout << " " << i;
    }
    
}