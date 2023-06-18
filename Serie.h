/* Ximena Serna Mendoza A01749870 IDM
Implementación clase serie */
#ifndef SERIE_H
#define SERIE_H
#include "Video.h"
#include "Episodio.h"
#include <string>
#include <vector>

class Serie : public Video
{
    private:
    std::vector<Episodio> episodios;// Vector de episodios de la serie

    public:
    Serie(std::string id, std::string nombre, std::string genero, int calificacion, int duracion, std::string fechaEstreno);
    void agregarEpisodio(Episodio& episodio);
 // Método para obtener todos los episodios de la serie
    std::vector<Episodio>getEpisodios();
    // Método para calcular el promedio de calificación de la serie
    double calculaPromCalificacion();





};
#endif