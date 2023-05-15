#include <iostream>
#include <string>

class Moneda {
private:
    std::string tipo;
    double cantidad;
public:
    Moneda(std::string tipo, double cantidad) {
        this->tipo = tipo;
        this->cantidad = cantidad;
    }

    // Métodos para acceder a los atributos de la clase
    std::string getTipo() {
        return tipo;
    }

    void setTipo(std::string tipo) {
        this->tipo = tipo;
    }

    double getCantidad() {
        return cantidad;
    }

    void setCantidad(double cantidad) {
        this->cantidad = cantidad;
    }

    // Métodos para operaciones con la moneda
    void sumarCantidad(double cantidad) {
        this->cantidad += cantidad;
    }

    void restarCantidad(double cantidad) {
        this->cantidad -= cantidad;
    }

    void mostrarMoneda() {
        std::cout << "Tengo " << cantidad << " " << tipo << std::endl;
    }
};

int main() {
    std::string tipo;
    double cantidad;

    while (tipo != "fin") {
        std::cout << "Ingrese el tipo de moneda (o 'fin' para terminar): ";
        std::cin >> tipo;

        if (tipo != "fin") {
            std::cout << "Ingrese la cantidad de " << tipo << ": ";
            std::cin >> cantidad;

            Moneda moneda(tipo, cantidad);
            moneda.mostrarMoneda();
        }
    }

    return 0;
}
