#ifndef PELICULA_H
#define PELICULA_H
#include "Video.h"
class Pelicula : public Video
{
    private:
    //Hereda todos los atributos por default de 
    //video y no se ocupa ninguno adicional
    public:
    Pelicula(std::string id, std::string nombre, std::string genero, int calificacion, int duracion, std::string fechaEstreno);
    void muestrainfo();

};
#endif