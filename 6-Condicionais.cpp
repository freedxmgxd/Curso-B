#include <iostream>

int main(){
    double a, b;
    std::string operador;

    std::cout << "Você  deseja somar ou subtrair?" << std::endl;
    std::getline(std::cin, operador);
    if (operador == "somar"){
        std::cout << "Diga os dois numeros a serem somados. " <<std::endl;
        std::cin >> a >> b;
        std::cout << "O resultado da soma é " << a + b << std::endl;
    } else if (operador == "subtrair"){
        std::cout << "Diga o numero que será subtraido e quanto será subtraido. " << std::endl;
        std::cin >> a >> b;
        std::cout << "O resultado da substração será " << a - b << std::endl;
    }


}