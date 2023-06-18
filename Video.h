/* Ximena Serna Mendoza A01749870 IDM
Implementación clase video */
#ifndef VIDEO_H
#define VIDEO_H

#include <string>

class Video 
{
    protected:
    std::string id;
    std::string nombre;
    std::string genero;
    int calificacion;
    int duracion;
    std::string fechaEstreno;

    public:
      // Constructor de la clase Video
    Video(std::string id, std::string nombre, std::string genero, int duracion, int calificacion, std::string fechaEstreno);
    //se empieza el uso de los getters y setters

   
    void setCalificacion(int calificacion);
    

    std::string getid();
    std::string getNombre();
    std::string getGenero();
    int getCalificacion();
    int getDuracion();
    std::string getfechaEstreno();

//el método virtual muestra información del video (debe ser implementado en las clases derivadas
    virtual void muestrainfo()= 0;

    

};
#endif
