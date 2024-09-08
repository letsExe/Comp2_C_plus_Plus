#include "pessoa.h"

Pessoa::Pessoa(string nome, Pessoa *pai, Pessoa *mae ){
    this->pai = pai;
    this->mae = mae;
    this->nome = nome;
}

void Pessoa::mostrar (string identacao ) {
    cout << identacao << nome << endl;
    if (mae) mae->mostrar(identacao + "   ");
    if (pai) pai->mostrar(identacao + "   ");
}

bool Pessoa::equals (const Pessoa &other ) {
    if (this->nome.compare(other.nome)==0) {
        if (mae==nullptr && other.mae==nullptr) {
            return true;
        }
        if (mae==nullptr || other.mae==nullptr) {
            return false;
        }
        if (mae->nome.compare(other.mae->nome)==0) {
            return true;
        }
    }
    return false;
}

void Pessoa::irmao(Pessoa fulana){
    if (this->mae == fulana.mae || this->pai == fulana.pai)
        cout << "Sao irmaos" << endl;
    else    
        cout << "Nao eh irmao" << endl;
}

void Pessoa::antecessor(Pessoa fulano){
    if (this->mae->equals(fulano)){
        cout << fulano.nome << " eh mae de " << this->nome << endl;
    }else if (this->pai->equals(fulano)){
        cout << fulano.nome << " eh pai de " << this->nome << endl;
    }else if (this->mae->pai->equals(fulano) || this->pai->pai->equals(fulano)){
        cout << fulano.nome << " eh avo de " << this->nome << endl;
    }else if (this->mae->mae->equals(fulano) || this->pai->mae->equals(fulano)){
        cout << fulano.nome << " eh avoh de " << this->nome << endl;
    }
}

Pessoa::~Pessoa() {
    cout << "Destruindo pessoa " << nome << endl;
    if(this->pai!=0) delete this->pai;
    if(this->mae)    delete this->mae;
}
