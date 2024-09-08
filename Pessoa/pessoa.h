#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <iostream>

using namespace std;

class Pessoa {
    protected:
        Pessoa *pai;
        Pessoa *mae;
        string nome;

    public:
        Pessoa(string nome, Pessoa *pai=nullptr, Pessoa *mae=nullptr);
        bool equals (const Pessoa &other);
        void mostrar (string identacao="" );
        void irmao(Pessoa fulana);
        void antecessor(Pessoa fulano);
        ~Pessoa();

};

#endif // PESSOA_H
