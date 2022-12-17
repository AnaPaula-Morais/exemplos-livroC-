#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{
    /* Faça um programa que receba do usuário o código (menu) e 5 números digitados (FOR), calcule e mostre:
        0 - Fecha programa
        1 - somatória
        2 - quantidade de números ímpares
        3 - quantidade de números pares
        4 - somatória de números pares
        5 - somatória de números ímpares
        6 - multiplos de 3
        7 - tabuada do 4(de 1 a 10)
        8 - media aritmetica
        default: valor inválido
    */

    int numMenu = 0;
    int num = 0;

    cout << "===========================================" << endl;
    cout << "                MENU                       " << endl;
    cout << "    0 - Fechar programa                    " << endl;
    cout << "    1 - somatoria                          " << endl;
    cout << "    2 - quantidade de numeros impares      " << endl;
    cout << "    3 - quantidade de numeros pares        " << endl;
    cout << "    4 - somatoria de numeros pares         " << endl;
    cout << "    5 - somatoria de numeros impares       " << endl;
    cout << "    6 - multiplos de 3                     " << endl;
    cout << "    7 - tabuada do 4(de 1 a 10)            " << endl;
    cout << "    8 - media aritmetica                   " << endl;
    cout << "===========================================" << endl;

    cout << "Digite um numero de acordo com o menu acima" << endl;
    cin >> numMenu;

    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << "Digite um numero";
    //     cin  >> num;
    // }
    int soma = 0;
    int qndImpares = 0;
    int qndPares = 0;
    string multiplos3 = "";

    switch (numMenu)
    {
    case 0:
        cout << "Fechar Programa";
        break;
    case 1:
        cout << "Somatoria dos numeros digitados" << endl;
        for (int i = 1; i <= 5; i++)
        {
            cout << "Digite um numero" << endl;
            cin >> num;
            soma = soma + num;
        }
        cout << "A soma dos numros digitados foi " << soma;
        break;
    case 2:
        cout << "Quantidade de numeros impares" << endl;
        for (int i = 1; i <= 5; i++)
        {
            cout << "Digite um numero" << endl;
            cin >> num;
            if (num % 2 == 1)
            {
                qndImpares++;
            }
        }
        cout << "Foram digitados " << qndImpares << " numero(s) impares" << endl;
        break;
    case 3:
        cout << "Quantidade de numeros pares" << endl;
        for (int i = 1; i <= 5; i++)
        {
            cout << "Digite um numero" << endl;
            cin >> num;
            if (num % 2 == 0)
            {
                qndPares++;
            }
        }
        cout << "Foram digitados " << qndPares << " numero(s) pares" << endl;
        break;
    case 4:
        cout << "Somatoria  dos numeros pares" << endl;
        for (int i = 1; i <= 5; i++)
        {
            cout << "Digite um numero" << endl;
            cin >> num;

            if (num % 2 == 0)
            {
                soma = soma + num;
            }
        }
        cout << "A soma dos numeros pares digitados foi " << soma;
        break;
    case 5:
        cout << "Somatoria dos numeros impares" << endl;

        for (int i = 1; i <= 5; i++)
        {
            cout << "Digite um numero" << endl;
            cin >> num;

            if (num % 2 == 1)
            {
                soma = soma + num;
            }
        }
        cout << "A soma dos numeros impares digitados foi " << soma;
        break;
    case 6:
        cout << "Multiplos de 3" << endl;
        for (int i = 1; i <= 5; i++)
        {
            cout << "Digite um numero" << endl;
            cin >> num;

            if (num % 3 == 0)
            {
                multiplos3 = multiplos3 + to_string(num) + " ";
            }
        }
        cout << "Os multiplos de 3 sao " << multiplos3;
        break;
    case 7:
        cout << "Tabuada do 4(de 1 a 10)" << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << "4 x " << i << " = " << 4 * i << endl;
        }
        break;
    case 8:
        cout << "Media aritmetica" << endl;
        for (int i = 1; i <= 5; i++)
        {
            cout << "Digite um numero" << endl;
            cin >> num;
            soma = soma + num;
        }
        cout << "A media aritmetica dos numeros digitados foi " << soma / 5;
        break;
    default:
        cout << "Valor Invalido";
        break;
    }
}