#include<iostream>

int main(){
    std::string sabor;
    int numero;

    std::cout << "Você deseja quantos bolos?" << std::endl;
    std::cin >> numero;

    std::cout << "Qual sabor de bolo você quer?" << std::endl;
    std::getline(std::cin, sabor);

    std::cout << "Você irá receber " << numero << " bolos de " << sabor << std::endl;
}