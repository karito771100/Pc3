#include "Plataforma.h"

Plataforma::Plataforma() {
}

Plataforma::Plataforma(string nombre) : nombre(nombre) {
}

void Plataforma::agregarCategoria(Categoria *categoria) {
    this->getCategorias().push_back(categoria);
}

void Plataforma::mostrarCategorias() {
    cout << "Plataforma: " << nombre << endl;
    for (int i = 0; i < getCategorias().size(); i++) {
        categorias[i]->mostrarCanciones();
    }
}

string Plataforma::getNombre() {
    return nombre;
}

vector<Categoria *> &Plataforma::getCategorias() {
    return categorias;
}

void Plataforma::escribirInforme(string nombreArchivo) {
    ofstream outFile(nombreArchivo);

    if (!outFile.is_open()) {
        cout << "No se pudo crear el archivo";
        exit(1);
    }

    for (int i = 0; i < categorias.size(); i++) {
        if (categorias[i]->getCantidadCanciones() == 0) {
            continue;
        }
        int totalReproducciones = 0;
        Cancion *cancionMasReproducida = categorias[i]->getCancion(0);

        outFile << categorias[i]->getNombre() << ",";
        outFile << categorias[i]->getCantidadCanciones() << ",";
        for (int j = 0; j < categorias[i]->getCantidadCanciones(); j++) {
            totalReproducciones += categorias[i]->getCancion(j)->getReproducciones();
            if (categorias[i]->getCancion(j)->getReproducciones() > cancionMasReproducida->getReproducciones()) {
                cancionMasReproducida = categorias[i]->getCancion(j);
            }
        }

        outFile << totalReproducciones << ",";
        outFile << cancionMasReproducida->getNombreArtista() << "," << cancionMasReproducida->getNombre() << endl;
    }
    outFile.close();
}

Plataforma::~Plataforma() {
    nombre = "";
    for (int i = 0; i < categorias.size(); i++) {
        delete categorias[i];
    }
    categorias.clear();
}
