#include <iostream>
#include "usuario.h"
#include "operacao.h"

int main(){
    system("clear");
    Usuario us;
    Operacao op;
    us.nome = "Alírio D'agoberto";
    us.email = "alirio@hotmail.com.br";
    us.senha = "123";
    us.nivel = "Admin";
    op.cadastro(us.nome, us.email, us.senha, us.nivel);



    return 0;
}