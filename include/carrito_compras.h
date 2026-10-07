#ifndef CARRITO_COMPRAS_H
#define CARRITO_COMPRAS_H

#include "item_carrito.h"
#include <vector>

using namespace std;

class CarritoCompras {
private:
    vector<ItemCarrito> items;
public:
    void agregarItem(Producto* producto, int cantidad);
    void eliminarItem(Producto* producto);
    int getSubtotal() const;
    void mostrarItems() const;
};

#endif