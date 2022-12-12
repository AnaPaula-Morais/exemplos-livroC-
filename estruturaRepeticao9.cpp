#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    // tabuada de um numero de 1 a 10.
    int num = 0;

    cout << "Digite um numero de 1 a 10: " << endl;
    cin  >> num;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    
}