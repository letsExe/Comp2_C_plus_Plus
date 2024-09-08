#include <iostream>
#include <cmath>
#include "ponto.h"
using namespace std;


Ponto::Ponto(){
        this->x = 0;
        this->y = 0;
    }

Ponto::Ponto(double x, double y){
        this->x = x;
        this->y = y;
    }

Ponto::Ponto(Ponto *a){
    this->x = a->x;
    this->y = a->y;
}

void Ponto::setx(double x){ this->x = x; } 
void Ponto::sety(double y){ this->y = y; }

double Ponto::getx(){ return x; }
double Ponto::gety(){ return y; }

void Ponto::move(){
    this->x = 0;
    this->y = 0;
}

void Ponto::move(double x, double y){
    this->x = x;
    this->y = y;
}

void Ponto::move(Ponto *a){
    this->x = a->x;
    this->y = a->y;
}

bool Ponto::equals(Ponto *a){
    return ((this->x == a->x) && (this->y == a->y));
}

double Ponto::CalcDistancia (Ponto *a){
    double x, y, dist; 

    x = a->x - this->x;
    y = a->y - this->y;
    dist = ((x*x) + (y*y));

    return sqrt(dist);
}

Ponto Ponto::clone(){
    Ponto p = Ponto(this->x, this->y); 
    return p;       
}

void Ponto::print(){
    cout << "Ponto (" << x <<","<< y << ")" << endl;
} 

Ponto::~Ponto(){
    cout << "Ponto destruido." << endl;
}