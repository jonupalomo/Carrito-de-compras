#include <iostream>
#include "usuario.h"
#include "producto.h"
#include "carrito_compras.h"

using namespace std;

int main() {
    Producto* pan = new Producto("Pan", 2500, 5);
    Producto* leche = new Producto("Leche", 3200, 4);
    Producto* huevos = new Producto("Huevos", 4500, 3);

    Usuario usuario("Juan");
    CarritoCompras carrito;

    carrito.agregarItem(pan, 2);
    carrito.agregarItem(leche, 1);

    cout << "=== Carrito ===" << endl;
    carrito.mostrarItems();
    cout << "Subtotal total: " << carrito.getSubtotal() << endl;

    usuario.agregarProductoAlHistorial(pan);
    usuario.agregarProductoAlHistorial(leche);

    cout << "\n=== Historial del usuario ===" << endl;
    usuario.mostrarHistorialCompras();

    pan->reducirStock(1);
    leche->reducirStock(1);

    cout << "\nStock actualizado:" << endl;
    cout << pan->getNombre() << ": " << pan->getStock() << endl;
    cout << leche->getNombre() << ": " << leche->getStock() << endl;

    delete pan;
    delete leche;
    delete huevos;

    return 0;
}