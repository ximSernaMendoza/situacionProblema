#ifndef EPISODIO_H
#define EPISODIO_H
#include "Video.h"

class Episodio : public Video
{
    private:
    std::string temporada;
    int numeroEp;

    public:
    Episodio(std::string id, std::string nombre, std::string genero, int calificacion, int duracion, std::string fechaEstreno, std::string temporada, int numeroEp);
    std::string getTemporada();
    int getnumeroEp();
    void muestrainfo();


};
#endif