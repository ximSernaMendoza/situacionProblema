#include "Pelicula.h"
#include <iostream>
using std::cout;
using std::endl;

Pelicula::Pelicula(std::string id, std::string nombre, std::string genero, int calificacion, int duracion, std::string fechaEstreno): Video(id, nombre, genero, calificacion, duracion, fechaEstreno){}

void Pelicula::muestrainfo()
{
    cout<<"ID de la película: "<<id<<endl;
    cout<<"Nombre de la película: "<<nombre<<endl;
    cout<<"Género de película: "<<genero<<endl;
    cout<<"su calificación: "<<calificacion<<endl;
    cout<<"La duración: "<<duracion<<endl;
    cout<<"Fecha de estreno: "<<fechaEstreno<<endl;
}
