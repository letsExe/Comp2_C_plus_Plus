#ifndef PONTO_H
#define PONTO_H
#include <iostream>
#include <cmath>
using namespace std;

class Ponto{
    private:
        double x;
        double y;

    public:
        Ponto();
        Ponto( double x, double y );
        Ponto(Ponto *a);

        void setx(double x); 
        void sety(double y);

        double getx();
        double gety();

        void move();
        void move(double x, double y);
        void move(Ponto *a);

        bool equals(Ponto *a);
        double CalcDistancia(Ponto *a);
        Ponto clone();
        void print();

        ~Ponto();  
};

#endif
