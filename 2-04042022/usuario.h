/*Biblioteca de entrada e
saída de dados*/
#include <iostream>

/*Biblioteca string que utiliza char,
para ajudar na inclusão de textos*/
#include <string>

/*Bibliotecas STD*/
using std::cout;
using std::cin;
using std::string;

/*A seguir a definição da classe,
Por padrão definimos o nome da classe
com o primeiro caracter maiusculo*/
class Usuario{
    public:
        string nome;
        string senha;
        string email;
        string nivel;
};