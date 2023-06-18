/*Ximena Serna Mendoza IDM A01749870
Implementación de la Clase episodio*/
#ifndef EPISODIO_H
#define EPISODIO_H
#include "Video.h"

class Episodio : public Video
{
    private:
    std::string temporada;// Temporada a la que pertenece el episodio
    int numeroEp;// Número del episodio

    public:
    Episodio(std::string id, std::string nombre, std::string genero, int calificacion, int duracion, std::string fechaEstreno, std::string temporada, int numeroEp);
    std::string getTemporada();
    int getnumeroEp();
    void muestrainfo();


};
#endif