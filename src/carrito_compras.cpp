#include "carrito_compras.h"
#include <iostream>

void CarritoCompras::agregarItem(Producto* producto, int cantidad) {
    items.push_back(ItemCarrito(producto, cantidad));
}

void CarritoCompras::eliminarItem(Producto* producto) {
    for (auto it = items.begin(); it != items.end(); ++it) {
        if (it->getProducto() == producto) {
            items.erase(it);
            break;
        }
    }
}

int CarritoCompras::getSubtotal() const {
    int subtotal = 0;
    for (const auto& item : items) {
        subtotal += item.getSubtotal();
    }
    return subtotal;
}

void CarritoCompras::mostrarItems() const {
    for (const auto& item : items) {
        std::cout << "Producto: " << item.getProducto()->getNombre() << ", Cantidad: " << item.getCantidad() << ", Subtotal: " << item.getSubtotal() << std::endl;
    }
}