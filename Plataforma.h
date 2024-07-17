#ifndef PLATAFORMA_H
#define PLATAFORMA_H

#include <iostream>
#include <vector>
#include <fstream>
#include "Categoria.h"

using namespace std;

class Plataforma {
private:
    string nombre;
    vector<Categoria *> categorias;

public:
    Plataforma();

    Plataforma(string nombre);

    string getNombre();

    void agregarCategoria(Categoria *categoria);

    void mostrarCategorias();

    void escribirInforme(string nombreArchivo);

    vector<Categoria *> &getCategorias();

    ~Plataforma();
};

#endif // PLATAFORMA_H
