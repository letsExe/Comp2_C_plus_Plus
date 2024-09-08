#include <iostream>
#include <cmath>
#include "ponto.h"
using namespace std;

int main(){
    Ponto p = new Ponto();
    double x, y;

    //teste do ponto da origem
    p.print();
    cin >> x >> y;

    //teste lendo dois ponto
    Ponto p2 = new Ponto(x, y);
    p2.print();

    //setando ponto
    cin >> x >> y;
    p.setx(x); //teste com x
    p.sety(y); //testando com y
    cout << "Novo ponto (" << p.getx() <<"," << p.gety() << ")" << endl;

    p2.move(x+1, y+1);
    p2.print();

    //verificando se dois ponto sao iguais
    cout << (p.equals(&p2) ? "sao iguais" : "nao sao iguais") << endl;

    //distancia de dois pontos
    cout << "A distancia eh: " << p.CalcDistancia(&p2) << endl;

    //clonando
    p2 = p.clone();
    p2.print();

    return 0;
}