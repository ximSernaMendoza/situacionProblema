/* clase video*/
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
    Video(std::string id, std::string nombre, std::string genero, int duracion, int calificacion, std::string fechaEstreno);
    //se empieza el uso de los getters y setters

    void setid(std::string id);
    void setNombre(std::string nombre);
    void setGenero(std::string genero);
    void setCalificion(int calificacion);
    void setDuracion(int duracion);
    void setfechaEstreno(std::string setfechaEstreno);

    std::string getid();
    std::string getNombre();
    std::string getGenero();
    int getCalificacion();
    int getDuracion();
    std::string setfechaEstreno();

    virtual void muestrainfo()= 0;

    

};
#endif
