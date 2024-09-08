#include <iostream>
#include "pessoa.h"

using namespace std;

int main(){
    Pessoa *avo_m = new Pessoa("Pedro");
    Pessoa *avoh_m = new Pessoa("Joana");

    Pessoa *avo_p = new Pessoa("Miguel");
    Pessoa *avoh_p = new Pessoa("Olivia");

    Pessoa *pai = new Pessoa("Antonio", avo_p, avoh_p);
    Pessoa *mae = new Pessoa("Rosalia", avo_m, avoh_m);

    Pessoa *eu = new Pessoa("Maria", pai, mae);
    Pessoa *irmao = new Pessoa("Henrique", pai, mae);

    Pessoa *other  = new Pessoa("Maria", 0, new Pessoa("Rosalia"));
    
    eu->mostrar();
    cout << " Mesma pessoa " << eu->equals(*other) << endl;
    eu->irmao(*irmao);

    eu->antecessor(*avo_m);
    eu->antecessor(*mae);
    mae->antecessor(*eu);

    delete eu;
    delete other;

    return 0;
}