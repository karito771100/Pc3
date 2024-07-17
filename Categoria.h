#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <iostream>
#include <vector>
#include "Cancion.h"

using namespace std;

class Categoria {
    string nombre;
    vector<Cancion *> canciones;

    void agregarCancion(Cancion *cancion);

public:
    Categoria();

    Categoria(string nombre);


    Cancion *getCancion(int i);

    string getNombre();

    vector<Cancion *> &getCanciones();

    int getCantidadCanciones();

    void mostrarCanciones();

    friend Categoria &operator+(Categoria &categoria, Cancion *cancion) {
        categoria.getCanciones().push_back(cancion);
        return categoria;
    }

    ~Categoria();
};

#endif // CATEGORIA_H
