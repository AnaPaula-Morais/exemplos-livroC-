#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
    /*Faça um programa que receba do usuário um número (menu), calcule e mostre:
        0 - Fechar o programa
        1 - multiplos de 2
        2 - multiplos de 3
        3 - números pares de 0 a 10
        4 - números ímpares de 10 a 20
        obs: default: valor inválido
    */
    int num = 0;
    cout << "====================================" << endl;
    cout << "            MENU                    " << endl;
    cout << "    0 - Fechar programa             " << endl;
    cout << "    1 - multiplos de 2              " << endl;
    cout << "    2 - multiplos de 3              " << endl;
    cout << "    3 - numeros pares de 0 a 10     " << endl;
    cout << "    4 - numeros impares de 10 a 20  " << endl;
    cout << "====================================" << endl;

    cout << "Escolha um numero de acordo com o menu acima:" << endl;
    cin >> num;

    switch (num)
    {
    case 0:
        cout << "Fechar programa" << endl;
        break;
    case 1:
        cout << "Multiplos de 2" << endl;
        for (int i = 1; i <= 100; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
            }
        }
        break;
    case 2:
        cout << "Multiplos de 3" << endl;
        for (int i = 1; i <= 100; i++)
        {
            if (i % 3 == 0)
            {
                cout << i << endl;
            }
        }
        break;
    case 3:
        cout << "Numeros pares de 0 a 10" << endl;
        for (int i = 0; i < 11; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
            }
        }
        break;
    case 4:
        cout << "Numeros impares de 10 a 20" << endl;
        for (int i = 10; i <= 20; i++)
        {
            if (i % 2 == 1)
            {
                cout << i << endl;
            }
        }
        break;
    default:
        cout << "Valor invalido" << endl;
        break;
    }
}