#include "item_carrito.h"

ItemCarrito::ItemCarrito(Producto* producto, int cantidad) : producto(producto), cantidad(cantidad) {}

Producto* ItemCarrito::getProducto() const {
    return producto;
}

int ItemCarrito::getCantidad() const {
    return cantidad;
}

int ItemCarrito::getSubtotal() const {
    return producto->getPrecio() * cantidad;
}