#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>

using namespace std;

class Producto {
private:
    string nombre;
    int precio;
    int stock;

public:
    Producto(string nombre, int precio, int stock);

    string getNombre() const;
    int getPrecio() const;
    int getStock() const;

    void reducirStock(int cantidad);
};

#endif