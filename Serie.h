#ifndef SERIE_H
#define SERIE_H
#include "Video.h"
#include "Episodio.h"
#include <string>
#include <vector>

class Serie : public Video
{
    private:
    std::vector<Episodio> episodios;

    public:
    Serie(std::string id, std::string nombre, std::string genero, int calificacion, int duracion, std::string fechaEstreno);
    void agregarEpisodio(Episodio& episodio);
    std::vector<Episodio>getEpisodios();
    double calculaPromCalificacion();





};
#endif