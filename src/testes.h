#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominio.h"
#include "entidades.h"

using namespace std;
// ------------------ Testes de Domínios -----------------------

// ------------------- Limite - 222005395 ----------------------

class TULimite {
private:

    const static int VALOR_VALIDO;
    const static int VALOR_INVALIDO;

    Limite *limite;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

//-----------------------------------------------------------------------


// ------------------- Senha - 222005395 ----------------------

class TUSenha{
private:

    const static string STRING_VALIDO;
    const static string STRING_INVALIDO;

    Senha *senha;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

//-----------------------------------------------------------------------

// ------------------- Codigo - 222005395 ----------------------

class TUCodigo{
private:

    const static string STRING_VALIDO;
    const static string STRING_INVALIDO;

    Codigo* codigo;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

//-----------------------------------------------------------------------

//--------------------- E-mail - 222025960 --------------------------
class TUEmail {
private:
    const static string STRING_VALIDO;
    const static string STRING_INVALIDO;   
    Email *email;                      
    int estado;                            
    void setUp();                     
    void tearDown();                       
    void testarCenarioSucesso();         
    void testarCenarioFalha();             

public:
    const static int SUCESSO =  0;        
    const static int FALHA   = -1;       
    int run();                          
};
//--------------------------------------------------------------
// ---------------------------- Coluna- 222025960 -----------------
class TUColuna {
private:

    const static string STRING_VALIDO;
    const static string STRING_INVALIDO;


    Coluna *coluna;

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};
// ---------------------  Texto - 222025960 ----------------------
class TUTexto {
private:
    const static string STRING_VALIDO;
    const static string STRING_INVALIDO;   
    Texto *texto;                  
    int estado;                        
    void setUp();                         
    void tearDown();                    
    void testarCenarioSucesso();           
    void testarCenarioFalha();             

public:
    const static int SUCESSO =  0;         
    const static int FALHA   = -1;         
    int run();                             
};


// ------------------ Testes de Entidades -----------------------

// ------------------- Conta - 222005386 ----------------------
class TUConta {
private:

    const static string STRING_VALIDO;
    const static string STRING_INVALIDO;

    Conta* conta;

    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};
//-----------------------------------------------------------------------

// ------------------- Quadro - 222005386 ----------------------
class TUQuadro {
private:

    const static string STRING_VALIDO;
    const static string STRING_INVALIDO;

    Quadro* quadro;

    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};

//-----------------------------------------------------------------------
// ------------------- Cartão - 222005386 ----------------------
class TUCartao {
private:
   
    const static string STRING_VALIDO;
    const static string STRING_INVALIDO;

    Cartao* cartao;
    
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
};
//-----------------------------------------------------------------------
#endif // TESTES_H_INCLUDED
