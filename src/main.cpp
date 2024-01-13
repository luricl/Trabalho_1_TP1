#include <iostream>
#include "dominio.h"
#include "testes.h"

using namespace std;
// ------------------ Testes de Domínios -----------------------
int main()
{
    //testa limite
    TULimite teste_limite;

    switch(teste_limite.run()){
        case TULimite::SUCESSO:
            cout << "SUCESSO - LIMITE" << endl;
            break;
        case TULimite::FALHA:
            cout << "FALHA   - LIMITE" << endl;
            break;
    }

    //testa senha
    TUSenha teste_senha;

    switch(teste_senha.run()){
        case TUSenha::SUCESSO:
            cout << "SUCESSO - SENHA" << endl;
            break;
        case TUSenha::FALHA:
            cout << "FALHA   - SENHA" << endl;
            break;
    }

    //testa codigo
    TUCodigo teste_codigo;

    switch(teste_codigo.run()){
        case TUCodigo::SUCESSO:
            cout << "SUCESSO - CODIGO" << endl;
            break;
        case TUCodigo::FALHA:
            cout << "FALHA   - CODIGO" << endl;
            break;
    }

    //testa coluna
    TUColuna teste_coluna;

    switch(teste_coluna.run()){
        case TUColuna::SUCESSO:
            cout << "SUCESSO - COLUNA" << endl;
            break;
        case TUColuna::FALHA:
            cout << "FALHA   - COLUNA" << endl;
            break;
    }

    //testa email
    TUEmail teste_email;

    switch(teste_email.run()){
        case TUEmail::SUCESSO:
            cout << "SUCESSO - EMAIL" << endl;
            break;
        case TUEmail::FALHA:
            cout << "FALHA   - EMAIL" << endl;
            break;
    }

    //testa texto
    TUTexto teste_texto;

    switch(teste_texto.run()){
        case TUTexto::SUCESSO:
            cout << "SUCESSO - TEXTO" << endl;
            break;
        case TUTexto::FALHA:
            cout << "FALHA   - TEXTO" << endl;
            break;
    }


//---------------------- Testes de Entidades -----------------------

    // Testa Conta
    TUConta teste_conta;

    switch(teste_conta.run()){
        case TUConta::SUCESSO:
            cout << "SUCESSO - CONTA" << endl;
            break;
        case TUConta::FALHA:
            cout << "FALHA   - CONTA" << endl;
            break;
    }

    // Testa Quadro
    TUQuadro teste_quadro;

    switch(teste_quadro.run()){
        case TUQuadro::SUCESSO:
            cout << "SUCESSO - QUADRO" << endl;
            break;
        case TUQuadro::FALHA:
            cout << "FALHA   - QUADRO" << endl;
            break;
    }

    // Testa Cartao
    TUCartao teste_cartao;

    switch(teste_cartao.run()){
        case TUCartao::SUCESSO:
            cout << "SUCESSO - CARTAO" << endl;
            break;
        case TUCartao::FALHA:
            cout << "FALHA   - CARTAOX" << endl;
            break;
    }

    return 0;
}
