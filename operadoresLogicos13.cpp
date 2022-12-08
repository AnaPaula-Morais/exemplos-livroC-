#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include<stdlib.h>
#include <cmath>
using namespace std;


int main() {
    float quantProduto = 0;
    float precoProduto = 0;
    int codProduto = 0;

    cout << "Qual a quantidade do produto..." << endl;
    cin  >> quantProduto;

    cout << "Qual o preco do produto..." << endl;
    cin  >> precoProduto;

    cout << "Qual o codProduto..." << endl;
    cin  >> codProduto;

    float quantidadeTotal = quantProduto * precoProduto;
    float desconto10 = precoProduto * 0.1 - precoProduto;

    if(codProduto == 1){
        cout << "A procedencia do produto e do Sul" << endl;
        cout << "Foram comprados " << quantProduto << " do produto" << " num total de " << quantidadeTotal << " reais" << endl;
        cout << "O valor final com o desconto e "  << abs(desconto10) << " reais";
    }else if (codProduto == 2){
        cout << "A procedencia do produto e do Norte" << endl;
        cout << "Foram compraos" << quantProduto << " do produto" << " num total de " << quantidadeTotal << " rais" << endl; 
        cout << "O valor final com desconto e " << abs((0.5 * precoProduto) -precoProduto) << endl;
    }else if (codProduto == 3){
        cout << "A procedencia do produto e do Leste e o valor total com o desconto e " << abs((0.7 * precoProduto) -precoProduto) << endl;
    }else if (codProduto == 4){
        cout << "A procedencia do produto e do Oeste e o valor total com o desconto e " << abs((0.25 * precoProduto) -precoProduto )<< endl;
    }else if (codProduto == 5 || codProduto == 6){
        cout << "A procedencia do produto e do Nordeste e o valor total com o desconto e " << abs((0.3 * precoProduto) -precoProduto) << endl;
    }else if(codProduto == 7 || codProduto == 9){
        cout << "A procedencia do produto e do Suldeste e o valor total com o desconto e " <<abs((0.4 * precoProduto) -precoProduto) << endl;
    }else if(codProduto >= 10 && codProduto <=20){
        cout << "A procedencia do produto e do Centro-oeste e o valor total com o desconto e " << abs((0.85 * precoProduto) - precoProduto) << endl;
    }else {
        cout << "Codigo invaliido";
    }

}