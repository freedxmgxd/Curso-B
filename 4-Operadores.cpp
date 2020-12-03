#include <iostream>

int main(){
    int a, b;
    int c;
    float d;
    // Operador atribuição (=)
    a = 9;  // 9
    b = 7;  // 7
    // Operadores matématicos;
    c = a + b; // Soma. c = 16
    c = a - b; // Subtração. c = 2
    c = a / b; // Divisão inteiro. c = 1, Pois o tipo da operação é inteira então irá retornar um inteiro
    c = a % b; // Modulo(Resto). c = 2.
    d = (float)a / b; //Divisão real. d = 1.28571
    
    //Incrementaçoes
    a = a + 1; //incrementação, demonstrar também o ++i e i++
    a = a - 1;
    a = a / 2;
    a = a * 2;

    //Comparadores Logicos

    (7 == 5);     // evaluates to false
    (5 > 4);      // evaluates to true
    (3 != 2);     // evaluates to true
    (6 >= 6);     // evaluates to true
    (5 < 5);      // evaluates to false

    //Operadores Logicos

    !(5 == 5);   // evaluates to false because the expression at its right (5 == 5) is true
    !(6 <= 4);   // evaluates to true because (6 <= 4) would be false
    !true;       // evaluates to false
    !false;      // evaluates to true 
    
    ( (5 == 5) && (3 > 6) );  // evaluates to false ( true && false )
    ( (5 == 5) || (3 > 6) );  // evaluates to true ( true || false )
    

}