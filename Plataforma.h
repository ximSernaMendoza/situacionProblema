/*Ximena Serna Mendoza
Implementación clase plataforma*/
#ifndef PLATAFORMA_H
#define PLATAFORMA_H

#include <vector>
#include "Pelicula.h"
#include "Serie.h"

class Plataforma 
{
    private: 
    std::vector<Video*> videos;

    public:
    // Función para obtener los datos de un archivo CSV y cargarlos en la plataforma
    bool Obtenercsv(std::string nombre_decsv);
    // Función para mostrar los videos con una calificación mayor o igual a una calificación mínima
    void videosCalificacion(int calmin);
     // Función para mostrar los videos de un género específico
    void videosPorGen(std::string genero);
    // Función para mostrar todos los episodios de una serie determinada
    void Ep_de_Serie(std::string nombreSerie);
      // Función para mostrar las películas con una calificación mayor a una calificación mínima
    void Peliculas_calificaion(int calmin);
      // Función para calificar un video
    void calificaVideo(std::string tituloVideo, int nuevaCalificacion);
       // Función para calcular el promedio de calificación de una serie
    float calculaPromSerie(std::string nombreSerie);  // Función auxiliar para separar una línea en tokens utilizando un delimitador
    std::vector<std::string> separar(std::string linea);






};
#endif
