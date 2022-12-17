#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

void calculaTabuada(int x)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << x << " X " << i << " = " << x * i << endl;
    }
    cout << endl;
}

int main()
{
    /*Faça um programa qu receba do usuário um número(menu), calcule e mostre:
         0 - Fechar programa
         1 - tabuada do 2
         2 - tabuada do 3
         3 - tabuada do 4
         4 - tabuada do 5 até o 10
         default: valor inválido

         criar função para calcular tabuada
    */

    int num = 0;
    int x = 0;
    do
    {
        cout << "=============================" << endl;
        cout << "            MENU             " << endl;
        cout << "    0 - Fechar programa      " << endl;
        cout << "    1 - tabuada do 2         " << endl;
        cout << "    2 - tabuada do 3         " << endl;
        cout << "    3 - tabuada do 4         " << endl;
        cout << "    4 - tabuada do 5 ate o 10" << endl;
        cout << "=============================" << endl;

        cout << "Escolha um numero de acordo com o menu acima:" << endl;
        cin >> num;

        switch (num)
        {
        case 0:
            cout << "Fechar Programa" << endl;
            break;
        case 1:
            cout << "Tabuada do 2:" << endl;
            calculaTabuada(2);

            break;
        case 2:
            cout << "Tabuada do 3" << endl;
            calculaTabuada(3);
            break;
        case 3:
            cout << "Tabuada do 4" << endl;
            calculaTabuada(4);
            break;
        case 4:
            cout << "Tabuada do 5 ate o 10" << endl;
            for (int i = 5; i <= 10; i++)
            {
                calculaTabuada(i);
            }
        default:
            cout << "Valor Invalido" << endl;
            break;
        }
    } while (num != 0);
}