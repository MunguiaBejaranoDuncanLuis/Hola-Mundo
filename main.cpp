#include <iostream>
using namespace std;

#include <Mascota.hpp>
#include<Alimento.hpp>
#include<Dibujo.hpp>

int main(int argc, char const *argv[])
{
    Dibujo dibujo("./assets/kenay.txt");
    Dibujo dibujo2("./assets/koda.txt");
    dibujo2.Dibujar();
    dibujo.Dibujar();

    Mascota m1;
    Mascota m2;
    Mascota m3;

    Alimento alimento(5);
    
    m1.Comer(alimento);
    m2.Comer(alimento);
    m3.Comer(alimento);


    cout<<"Mascota "<<m1.LeerEnegia()<<endl;
    return 0;
}
