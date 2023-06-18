#include "Serie.h"

Serie::Serie(std::string id, std::string nombre, std::string genero, int calificacion, int duracion, std::string fechaEstreno)
    : Video(id, nombre, genero, duracion, calificacion, fechaEstreno) {}

void Serie::agregarEpisodio(Episodio& episodio)
{
    episodios.push_back(episodio);// Agrega un episodio al vector de episodios de la serie
}

std::vector<Episodio> Serie::getEpisodios()
{
    return episodios;// Devuelve el vector de episodios de la serie
}

double Serie::calculaPromCalificacion()
{  // Si no hay episodios, retorna 0.0 ya que no se puede calcular el promedio
    if(episodios.empty()){
        return 0.0;
    };
    int sumaCal=0;
    int cantEp = episodios.size();

    for(int i = 0; i<cantEp; i++){
        sumaCal += episodios[i].getCalificacion();
    }
    if (cantEp !=0){
        return static_cast<double>(sumaCal)/cantEp;
          // Calcula el promedio de calificaciones dividiendo la suma de calificaciones entre la cantidad de episodios    }else {
        return 0.0; // en caso de no haber ningún episodio para hacerle el promedio
    }

}


