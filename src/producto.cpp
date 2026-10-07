#include "producto.h"
#include <string>
#include <iostream>

using namespace std;

Producto::Producto(string nombre, int precio, int stock) : nombre(nombre), precio(precio), stock(stock) {}

string Producto::getNombre() const {
    return nombre;
}

int Producto::getPrecio() const {
    return precio;
}

int Producto::getStock() const {
    return stock;
}

void Producto::reducirStock(int cantidad) {
    if (stock >= cantidad) {
        stock -= cantidad;
    } else {
        cout << "No hay suficiente stock para el producto " << nombre << endl;
    }
}