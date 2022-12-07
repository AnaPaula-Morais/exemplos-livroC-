#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    string nomeProduto = "";
    int quantProduto = 0;
    float precoProduto = 0;


    cout << "Nome do produto" << endl;
    cin  >> nomeProduto;

    cout << "Quantidade do produto" << endl;
    cin  >> quantProduto;

    cout << "Valor da produto" << endl;
    cin  >> precoProduto;

    float subTotalVenda = quantProduto * precoProduto;
    float desconto = subTotalVenda * 0.15;
    float valorPagar = subTotalVenda - desconto;

    cout << "O subtotal da venda e  " << subTotalVenda << endl;
    cout << "O desconto sera de 15\%\ = " << desconto << endl;
    cout << "O valor a pagar sera " << valorPagar << endl;



}