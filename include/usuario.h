#ifndef USUARIO_H
#define USUARIO_H

#include <vector>
#include <string>
#include "producto.h"

using namespace std;

class Usuario {
private:
    string nombre;
    vector<Producto*> historialCompras;
public:
    Usuario(const string& nombre);
    void agregarProductoAlHistorial(Producto* producto);
    void mostrarHistorialCompras() const;
};

#endif