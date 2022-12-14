#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    // Faça um programa que mostre os números pares do intervalo de 100 a 200.
    
    for (int i = 100; i <= 200; i++)
    {
        if(i % 2 == 0){
            cout << i << " ";
        }
    }
    
}