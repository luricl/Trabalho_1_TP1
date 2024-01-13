#include "testes.h"

// ------------------ Testes de Domínios -----------------------

//------------------------ Limite ----------------------------

const int TULimite::VALOR_VALIDO = 5;
const int TULimite::VALOR_INVALIDO = 137;

// metodos da classe TULimite.

// inicializa teste
void TULimite::setUp(){
    limite = new Limite();
    estado = SUCESSO;
}

// Destroi objeto
void TULimite::tearDown(){
    delete limite;
}

void TULimite::testarCenarioSucesso(){
    try{
        limite->setLimite(VALOR_VALIDO);
        if (limite->getLimite() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument& excecao){
        estado = FALHA;
    }
}

void TULimite::testarCenarioFalha(){
    try{
        limite->setLimite(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument& excecao){
        return;
    }
}

int TULimite::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//----------------------------------------------------------


//------------------------ Senha ----------------------------

const string TUSenha::STRING_VALIDO = "A5b!c";
const string TUSenha::STRING_INVALIDO = "AA5b!";

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(STRING_VALIDO);
        if (senha->getSenha() != STRING_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument& excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(STRING_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument& excecao){
        return;
    }
}


int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();

    tearDown();
    return estado;
}

//-----------------------------------------------------------


//------------------------ Codigo ----------------------------

const string TUCodigo::STRING_VALIDO = "AB54";
const string TUCodigo::STRING_INVALIDO = "Ad5b";

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setValor(STRING_VALIDO);
        if (codigo->getValor() != STRING_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument& excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setValor(STRING_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument& excecao){
        return;
    }
}


int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();

    tearDown();
    return estado;
}


//-----------------------Email-----------
const string TUEmail::STRING_VALIDO = "marcus@gmail";
const string TUEmail::STRING_INVALIDO = "marcus@..gmail";


void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
        email->setEnderecoEmail(STRING_VALIDO);
        if (email->getEnderecoEmail() != STRING_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
        email->setEnderecoEmail(STRING_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getEnderecoEmail() == STRING_INVALIDO)
            estado = FALHA;
    }
}

int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
//-----------------------------------------------------------

//---------------------texto-------------
const string TUTexto::STRING_VALIDO = "Ola tudo bem";
const string TUTexto::STRING_INVALIDO = "Ola   .tudo bem";

void TUTexto::setUp(){
    texto = new Texto();
    estado = SUCESSO;
}

void TUTexto::tearDown(){
    delete texto;
}

void TUTexto::testarCenarioSucesso(){
    try{
        texto->setTexto(STRING_VALIDO);
        if (texto->getTexto() != STRING_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTexto::testarCenarioFalha(){
    try{
        texto->setTexto(STRING_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (texto->getTexto() == STRING_INVALIDO)
            estado = FALHA;
    }
}

int TUTexto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
//------------------------Coluna ---------------
const string TUColuna::STRING_VALIDO = "SOLICITADO";
const string TUColuna::STRING_INVALIDO = "EM ANALISE";

void TUColuna::setUp(){
    coluna = new Coluna();
    estado = SUCESSO;
}

void TUColuna::tearDown(){
    delete coluna;
}

void TUColuna::testarCenarioSucesso(){
    try{
        coluna->setColuna(STRING_VALIDO);
        if (coluna->getColuna() != STRING_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument& excecao){
        estado = FALHA;
    }
}

void TUColuna::testarCenarioFalha(){
    try{
        coluna->setColuna(STRING_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument& excecao){
        return;
    }
}


int TUColuna::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();

    tearDown();
    return estado;
}



//-----------------------------------------------------------

// ------------------ Testes de Entidades -----------------------

// Teste da entidade Conta
void TUConta::setUp() {
    conta = new Conta();
    estado = SUCESSO;
}

void TUConta::tearDown() {
    delete conta;
}

void TUConta::testarCenarioSucesso() {
    Email email;
    email.setEnderecoEmail("exemplo@email.com");
    conta->setEmail(email);
    if (conta->getEmail().getEnderecoEmail() != "exemplo@email.com")
        estado = FALHA;

    Texto nomeUsuario;
    nomeUsuario.setTexto("Nome usuario");
    conta->setNomeUsuario(nomeUsuario);
    if (conta->getNomeUsuario().getTexto() != "Nome usuario")
        estado = FALHA;

    Senha senha;
    senha.setSenha("Se12!");
    conta->setSenha(senha);
    if (conta->getSenha().getSenha() != "Se12!")
        estado = FALHA;
}

int TUConta::run() {
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

// Teste da entidade Quadro
void TUQuadro::setUp() {
    quadro = new Quadro();
    estado = SUCESSO;
}

void TUQuadro::tearDown() {
    delete quadro;
}

void TUQuadro::testarCenarioSucesso() {
    Codigo codigo;
    codigo.setValor("AB54");
    quadro->setCodigo(codigo);
    if (quadro->getCodigo().getValor() != "AB54")
        estado = FALHA;

    Texto nomeQuadro;
    nomeQuadro.setTexto("Nome quadro");
    quadro->setNomeQuadro(nomeQuadro);
    if (quadro->getNomeQuadro().getTexto() != "Nome quadro")
        estado = FALHA;

    Texto descricaoQuadro;
    descricaoQuadro.setTexto("Descricao do quadro");
    quadro->setDescricaoQuadro(descricaoQuadro);
    if (quadro->getDescricaoQuadro().getTexto() != "Descricao do quadro")
        estado = FALHA;

    Limite limite;
    limite.setLimite(10);
    quadro->setLimite(limite);
    if (quadro->getLimite().getLimite() != 10)
        estado = FALHA;
}

int TUQuadro::run() {
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

// Teste da entidade Cartao
void TUCartao::setUp() {
    cartao = new Cartao();
    estado = SUCESSO;
}

void TUCartao::tearDown() {
    delete cartao;
}

void TUCartao::testarCenarioSucesso() {
    Codigo codigo;
    codigo.setValor("AB54");
    cartao->setCodigo(codigo);
    if (cartao->getCodigo().getValor() != "AB54")
        estado = FALHA;

    Texto nomeCartao;
    nomeCartao.setTexto("Nome do cartao");
    cartao->setNomeCartao(nomeCartao);
    if (cartao->getNomeCartao().getTexto() != "Nome do cartao")
        estado = FALHA;

    Texto descricaoCartao;
    descricaoCartao.setTexto("Descricao do cartao");
    cartao->setDescricaoCartao(descricaoCartao);
    if (cartao->getDescricaoCartao().getTexto() != "Descricao do cartao")
        estado = FALHA;

    Coluna coluna;
    coluna.setColuna("EM EXECUÇÃO");
    cartao->setColuna(coluna);
    if (cartao->getColuna().getColuna() != "EM EXECUÇÃO")
        estado = FALHA;
}

int TUCartao::run() {
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
