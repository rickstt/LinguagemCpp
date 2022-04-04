/*Programa para trabalhar com orientação
a objeto. Usando classes e objetos*/

/*Biblioteca de entrada e
saída de dados*/
#include <iostream>

/*Chamada da biblioteca std*/
using std::cout;
using std::cin;

class Textos{
    public:
    void mensagem1(){
        cout << "Olá!\n";
    }
    void mensagem2(){
        cout << "Mundo!\n";
    }
};

int main(){
    Textos txt;
    txt.mensagem1();
    txt.mensagem2();
    
    return 0;
}