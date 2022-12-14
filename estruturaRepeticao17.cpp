#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    // Faça um programa que mostre os números ímpares do intervalo de 10 a 20.

    for (int i = 10; i <= 20; i++)
    {
        if(i % 2 == 1 ){
            cout << i << " ";
        }
    }
    
}