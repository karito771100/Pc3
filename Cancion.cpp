#include "Cancion.h"

Cancion::Cancion() {
    nombre = "";
    anio = 0;
    reproducciones = 0;
    letra = "";
    nombreArtista = "";
    paisArtista = "";
}

Cancion::Cancion(string nombre, int anio, int reproducciones, string letra, string nombreArtista, string paisArtista)
    : nombre(nombre), anio(anio), reproducciones(reproducciones), letra(letra), nombreArtista(nombreArtista),
      paisArtista(paisArtista) {
}

void Cancion::mostrar() {
    cout << nombre << " (" << anio << ") - " << nombreArtista << " [" << reproducciones << " reproducciones]" << endl;
}

void Cancion::operator*() {
    setReproducciones(getReproducciones() + 1);
    cout << "Reproduciendo la cancion " << nombre << " de " << nombreArtista << endl;
    cout << "Letra: " << letra << endl;
}

int Cancion::getReproducciones() {
    return reproducciones;
}

string Cancion::getNombre() {
    return nombre;
}

string Cancion::getNombreArtista() {
    return nombreArtista;
}

void Cancion::setReproducciones(int reproducciones) {
    this->reproducciones = reproducciones;
}

Cancion::~Cancion() {
    nombre = "";
    anio = 0;
    reproducciones = 0;
    letra = "";
    nombreArtista = "";
    paisArtista = "";
}
