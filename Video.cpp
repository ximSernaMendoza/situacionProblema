#include "Video.h"

Video::Video(std::string id, std::string nombre, std::string genero, int calificacion, int duracion, std::string fechaEstreno) : id(id), nombre(nombre), genero(genero), calificacion(calificacion), duracion(duracion), fechaEstreno(fechaEstreno){}


void Video::setCalificion(int calificacion)
{
    this->calificacion = calificacion;
}

std::string Video::getid()
{
    return id;
}

std::string Video::getNombre()
{
    return nombre;
}

std::string Video::getGenero()
{
    return genero;
}

int Video::getCalificacion()
{
    return duracion;
}

int Video::getDuracion()
{
    return 0;
}

std::string Video::getfechaEstreno()
{
    return fechaEstreno;
}
