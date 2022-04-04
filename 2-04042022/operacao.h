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

class Operacao{
    public:
        void cadastro(string nome, string senha, string email, string nivel){
            cout << "\nCadastro de usuário realizado.\n";
        }
        string login(string nome, string senha){
            return "\nSeja bem vindo(a)!\n";
        }
        string alterarsenha(string nome, string senha){
            return "\nSenha alterada.\n";
        }
};