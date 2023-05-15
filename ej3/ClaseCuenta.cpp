#include <iostream>
using namespace std;

class Cuenta {
private:
    string numero;
    string titular;
    float saldo;
    float interesAnual;
public:
    Cuenta();
    bool setNumero(string);
    string getNumero();
    float getInteres();
    bool ingresoInteresMes(float);
    bool setTitular(string);
    string getTitular();
    bool ingreso(float);
    float leerSaldo();
    bool retiro(float);
    bool EnRojos();};
Cuenta::Cuenta(){}
bool Cuenta::setNumero(string _numero){
      if(_numero.length() == 0){return false;}
      else{
      numero = _numero;
      return true;}}
string Cuenta::getNumero(){return numero;}
bool Cuenta::ingresoInteresMes(float _interesA){
    if(_interesA == 0){return false;}
    else{
	interesAnual = _interesA;
	return true;}}
float Cuenta::getInteres(){return interesAnual;}
bool Cuenta::setTitular(string _titular){
    if(_titular.length() == 0){return false;}
    else{
	titular = _titular;
	return true;}}
string Cuenta::getTitular(){return titular;}
bool Cuenta::ingreso(float _saldo){
    if(_saldo == 0){return false;}
    else{
	saldo = _saldo;
        return true;}}
float Cuenta::leerSaldo(){return saldo;}
bool Cuenta::retiro(float _saldo){
    if(_saldo == 0){return false;}
    else{
	saldo = saldo-_saldo;
	return true;}}
bool Cuenta::EnRojos(){
    if(saldo<0){return false;}
    else{return true;}}


int main() {
    Cuenta miCuenta;
    miCuenta.setNumero("19862374");
    miCuenta.ingresoInteresMes(3.6);
    miCuenta.setTitular("Gonzalez Silva Carlos Josue");
    miCuenta.ingreso(200.5);
    miCuenta.retiro(50);
    cout << "Titular: " << miCuenta.getTitular() << endl;
    cout << "Numero de cuenta: " << miCuenta.getNumero() << endl;
    cout << "Saldo disponible: ";
    cout << miCuenta.leerSaldo() << endl;
    cout << "Estado de cuenta 0 en rojos 1 en normal ";
    cout << miCuenta.EnRojos() << endl;
    
    return 0;}
