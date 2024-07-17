#ifndef CANCION_H
#define CANCION_H

#include <iostream>
#include <string>

using namespace std;

class Cancion {
private:
    string nombre;
    int anio;
    int reproducciones;
    string letra;
    string nombreArtista;
    string paisArtista;

public:
    Cancion();

    Cancion(string nombre, int anio, int reproducciones, string letra, string nombreArtista, string paisArtista);

    void mostrar();

    int getReproducciones();

    string getNombre();

    string getNombreArtista();

    void setReproducciones(int reproducciones);

    void operator*();

    ~Cancion();
};

#endif // CANCION_H
