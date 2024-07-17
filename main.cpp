#include <iostream>
#include "Plataforma.h"

using namespace std;

int main() {
    Plataforma *spotify = new Plataforma("Spotify");

    Categoria *pop = new Categoria("Pop");
    Categoria *rock = new Categoria("Rock");
    Categoria *hiphop = new Categoria("Hip-hop");

    Cancion *cancion1 = new Cancion("Prueba 1", 2023, 150, "Una dos tres cuatro prueba cinco seis", "Pop", "USA");
    Cancion *cancion2 = new Cancion("Prueba2", 1975, 300, "Multiples pruebas de pruebas mas pruebas", "Queen", "UK");

    // Asignacion de cancion en categoria
    *pop + cancion1;
    *rock + cancion2;

    // Asignacion de categoria en plataforma
    spotify->agregarCategoria(pop);
    spotify->agregarCategoria(rock);
    spotify->agregarCategoria(hiphop);

    cout << endl << "Categorias de " << spotify->getNombre() << endl;
    cout << "--------------------------------" << endl;
    spotify->mostrarCategorias();

    cout << endl << "Reproduciendo canciones..." << endl;
    cout << "--------------------------------" << endl;
    **cancion1;
    **cancion2;

    cout << endl << "Categorias despues de reproducir canciones" << endl;
    cout << "--------------------------------" << endl;
    spotify->mostrarCategorias();

    spotify->escribirInforme("informe_" + spotify->getNombre() + ".txt");

    // Borra todo
    delete spotify;

    return 0;
}
