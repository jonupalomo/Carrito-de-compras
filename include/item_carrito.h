#ifndef ITEM_CARRITO_H
#define ITEM_CARRITO_H

#include "producto.h"
#include <string>
#include <iostream>

using namespace std;

class ItemCarrito {
private:
    Producto* producto;
    int cantidad;
public:
    ItemCarrito(Producto* producto, int cantidad);
    Producto* getProducto() const;
    int getCantidad() const;

    int getSubtotal() const;
};

#endif