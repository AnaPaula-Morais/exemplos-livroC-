#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
   int num = 0;
   cout << "Digite um numero de 1 a 12 \n";
   cin  >> num;

   if(num == 1){
        cout << "O numero 1 faz referencia a Janeiro";
   }else if (num == 2){
        cout << "O numero 2 faz referencia a Fevereiro";
   } else if (num == 3){
        cout << "O numero 3 faz referencia a Março";
   }else if (num == 4){
        cout << "O numero 4 faz referencia a Abril";
   } else if (num == 5){
        cout << "O numero 5 faz referencia a Maio";
   }else if(num == 6){
        cout << "O numero 6 faz referencia a Junho";
   }else if (num == 7){
        cout << "O numero 7 faz referencia a Julho";
   }else if (num == 8){
        cout << "O numero 8 faz referencia a Agosto";
   }else if(num == 9){
        cout << "O numero 9 faz referencia a Setembro";
   }else if (num == 10){
        cout << "O numero 10 faz referencia a Outubro";
   }else if(num == 11){
        cout << "O numero 11 faz referencia a Novembro";
   }else if(num == 12){
        cout << "O numero 12 faz referencia a Dezembro";
   }else {
        cout << "Mes invallido";
   }
}