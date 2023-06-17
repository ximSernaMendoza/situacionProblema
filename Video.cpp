#include "Video.h"

Video::Video(std::string id, std::string nombre, std::string genero, int calificacion, int duracion, std::string fechaEstreno) : id(id), nombre(nombre), genero(genero), calificacion(calificacion), duracion(duracion), fechaEstreno(fechaEstreno){}


void Video::setCalificion(int calificacion)
{
    this->calificacion = calificacion;
}

std::string Video::getid()
{
    return std::string();
}

std::string Video::getNombre()
{
    return std::string();
}

std::string Video::getGenero()
{
    return std::string();
}

int Video::getCalificacion()
{
    return 0;
}

int Video::getDuracion()
{
    return 0;
}

std::string Video::setfechaEstreno()
{
    return std::string();
}
