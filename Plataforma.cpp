
#include <fstream>
#include <sstream>
#include <iostream>
#include "Plataforma.h"
#include "Video.h"
#include "Episodio.h"
#include "Pelicula.h"
using std::cout;
using std::endl;

bool Plataforma::Obtenercsv(std::string nombre_decsv)
{
    std::vector<std::string> Plataforma::separar(std::string linea);
    // Función para separar una línea de texto en tokens

    std::vector<std::string> tokens;  // Componentes de la línea
    std::stringstream entrada(linea); 

    std::string dato; // Variable para almacenar cada token individualmente
    int numeroTokens = 0;
    while (getline(entrada, dato, ','))
    {
        if (dato != "" && dato != "\n" && dato != "\r")
        {
            tokens.push_back(dato);
            numeroTokens++;
        }
    }
    return tokens;
    // Devuelve el vector de tokens obtenidos de la línea
}

 
 

}

void Plataforma::videosCalificacion(int calmin)
{
    std::cout << "Los videos con calificación mayor o igual a " << calmin << ":" << std::endl;

    for (std::vector<Video*>::const_iterator it = videos.begin(); it != videos.end(); ++it)
    {
        Video* video = *it;
        if (video->getCalificacion() >= calmin)
        {
            video->muestrainfo();
            std::cout << std::endl;
        }
    }
    // Recorre la lista de videos y muestra aquellos que tienen una calificación mayor o igual a calmin
}
}

void Plataforma::videosPorGen(std::string genero)
{
    std::cout<<"Género de "<< genero<<": "<<std::end;
    for (std::vector<Video*>::const_iterator it = videos.begin(); it !videos.end(); ++it){//const_iterator recorre el vector 
         Video* video = *it;
        if (video->getGenero().find(genero)){
            video->muestrainfo();
             <<std::endl;
        }
         // Recorre la lista de videos y muestra aquellos que pertenecen al género especificado
    }
}

void Plataforma::Ep_de_Serie(std::string nombreSerie)
{
    std::cout<<"Género de "<< genero<<": "<<std::end;
    for (std::vector<Video*>::const_iterator it = videos.begin(); it !videos.end(); ++it){//const_iterator recorre el vector 
         Video* video = *it;
        if (video->getGenero().find(genero)){
            video->muestrainfo();
             <<endl;
        }// Recorre la lista de videos y muestra los episodios de la serie especificada
    }
}

void Plataforma::Peliculas_calificaion(int calmin)
{

     std::cout << "Películas con calificación mayor a " << calificacionMinima << ":" << std::endl;

    // Recorre la lista de videos
    for (const Video* video : videos) {
        // Intenta convertir el video a un objeto Pelicula
        const Pelicula* pelicula = dynamic_cast<const Pelicula*>(video);

        // Verifica si la conversión fue exitosa y la calificación es mayor a la mínima requerida
        if (pelicula && pelicula->getCalificacion() > calificacionMinima) {
            // Muestra la información de la película
            cout << "ID de la película: " << pelicula->getid() << std::endl;
            cout << "Nombre de la película: " << pelicula->getNombre() << std::endl;
            cout << "Género de la película: " << pelicula->getGenero() << std::endl;
            cout << "Calificación: " << pelicula->getCalificacion() << std::endl;
            cout << "Duración: " << pelicula->getDuracion() << std::endl;
            cout << "Fecha de estreno: " << pelicula->getfechaEstreno() << std::endl;
            cout << std::endl;
        }
    }
}
    


}

void Plataforma::calificaVideo(std::string tituloVideo, int nuevaCalificacion)
{
    void ServicioStreaming::calificarVideo(std::string titulo, int calificacion) {
    bool videoEncontrado = false;
    for (Video* video : videos) {
        if (video->getNombre() == titulo) {
            video->setCalificacion(calificacion);
            videoEncontrado = true;
            break;
        }
    }
    if (!videoEncontrado) {
        std::cout << "No se encontró el video con título " << titulo << std::endl;
    }    // Busca el video con el título especificado y actualiza su calificación
}


}

float Plataforma::calculaPromSerie(std::string nombreSerie)
{
    bool serieEncontrada = false;
for (std::vector<Serie*>::const_iterator it = series.begin(); it != series.end(); ++it) {
    Serie* serie = *it;
    if (serie->getNombre() == nombreSerie) {
        double promedio = serie->calculaPromCalificacion();
        if (promedio == 0.0) {
            std::cout << "La serie " << nombreSerie << " no tiene episodios." << std::endl;
        } else {
            std::cout << "El promedio de calificación de la serie " << nombreSerie << " es: " << promedio << std::endl;
        }
        serieEncontrada = true;
        break;
    }
}
if (!serieEncontrada) {
    std::cout << "No se encontró la serie " << nombreSerie << std::endl;
}
}// Busca la serie con el nombre especificado y calcula el promedio de calificación de sus episodios
}
