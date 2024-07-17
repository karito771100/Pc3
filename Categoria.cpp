#include "Categoria.h"

Categoria::Categoria() {
    nombre = "";
    canciones = {};
}

Categoria::Categoria(string nombre) : nombre(nombre) {
    canciones = {};
}

void Categoria::agregarCancion(Cancion *cancion) {
    if (cancion == nullptr) {
        return;
    }
    cout << "Agregando cancion: " << cancion->getNombre() << endl;

    canciones.push_back(cancion);
}


void Categoria::mostrarCanciones() {
    cout << "Categoria: " << nombre << "\n";
    for (int i = 0; i < canciones.size(); i++) {
        cout << i + 1 << ". ";
        canciones[i]->mostrar();
    }
}

int Categoria::getCantidadCanciones() {
    return canciones.size();
}

vector<Cancion *> &Categoria::getCanciones() {
    return canciones;
}

Cancion *Categoria::getCancion(int i) {
    return canciones[i];
}

string Categoria::getNombre() {
    return nombre;
}

Categoria::~Categoria() {
    nombre = "";
    for (int i = 0; i < canciones.size(); i++) {
        delete canciones[i];
    }
    canciones.clear();
}
