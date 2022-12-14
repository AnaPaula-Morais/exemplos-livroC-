#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    // Faça um programa que mostre a quantidade de números pares de 1 ate 10.

    for (int i = 1; i <= 10; i++)
    {
        if(i % 2 == 0){
            cout << i;
        }
    }
    

}