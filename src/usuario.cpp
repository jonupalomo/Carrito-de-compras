#include "usuario.h"
#include <iostream>

using namespace std;

Usuario::Usuario(const string& nombre) : nombre(nombre) {}

void Usuario::agregarProductoAlHistorial(Producto* producto) {
    historialCompras.push_back(producto);
}

void Usuario::mostrarHistorialCompras() const {
    for (const auto& producto : historialCompras) {
        std::cout << "Producto: " << producto->getNombre() << std::endl;
    }
}