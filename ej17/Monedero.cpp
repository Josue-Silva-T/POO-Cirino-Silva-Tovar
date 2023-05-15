#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Moneda {
public:
    string nombre;
    float valor;
    string divisa;

    Moneda(string n, float v, string d) {
        nombre = n;
        valor = v;
        divisa = d;
    }
};

int main() {
    vector<Moneda*> monedas;
    string nombre, divisa;
    float valor;
    cout << "Ingrese los datos de las monedas, y escriba 'fin' como nombre para terminar la captura." << endl;
    while (true) {
        cout << "Nombre: ";
        getline(cin, nombre);
        if (nombre == "fin") break;
        cout << "Valor: ";
        cin >> valor;
        cin.ignore();
        cout << "Divisa: ";
        getline(cin, divisa);
        monedas.push_back(new Moneda(nombre, valor, divisa));
    }
    // Totalizar las monedas por divisa
    vector<string> divisas;
    vector<float> totales;
    for (Moneda* moneda : monedas) {
        int i = 0;
        while (i < divisas.size() && moneda->divisa != divisas[i]) {
            i++;
        }
        if (i == divisas.size()) {
            // Nueva divisa
            divisas.push_back(moneda->divisa);
            totales.push_back(moneda->valor);
        } else {
            // Divisa existente
            totales[i] += moneda->valor;
        }
    }
    // Imprimir la lista de monedas y los totales por divisa
    cout << "\nLista de monedas:" << endl;
    for (Moneda* moneda : monedas) {
        cout << moneda->nombre << " (" << moneda->divisa << "): " << moneda->valor << endl;
    }
    cout << "\nTotales por divisa:" << endl;
    for (int i = 0; i < divisas.size(); i++) {
        cout << divisas[i] << ": " << totales[i] << endl;
    }
    // Liberar memoria de las monedas
    for (Moneda* moneda : monedas) {
        delete moneda;
    }
    return 0;
}
