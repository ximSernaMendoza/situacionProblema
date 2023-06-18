#include "Episodio.h"
#include <iostream>
using std::cout;
using std::endl;

Episodio::Episodio(std::string id, std::string nombre, std::string genero, int calificacion, int duracion, std::string fechaEstreno, std::string temporada, int numeroEp): Video(id, nombre, genero, calificacion, duracion, fechaEstreno){}


std::string Episodio::getTemporada()
{
    return temporada;
}

int Episodio::getnumeroEp()
{
    return numeroEp;
}

void Episodio::muestrainfo()
{
    cout<<"ID: "<<id<<endl;
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Género: "<<genero<<endl;
    cout<<"au calificación: "<<calificacion<<endl;
    cout<<"La duración: "<<duracion<<endl;
    cout<<"Fecha de estreno: "<<fechaEstreno<<endl;
    cout<<"temporada: "<<temporada<<endl;
    cout<<"Número de episodio: "<<numeroEp<<endl;
}
