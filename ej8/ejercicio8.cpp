#include <iostream>
using namespace std;

class Cuenta {
private:
    string numero;
    string titular;
    float saldo;
    float interesAnual;
    float transferencia;
    int cvv;
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
    bool EnRojos();
    int getCvv();
    bool setCvv(int);
    float getTransferencia();
    bool setTransferencia(float);};
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
int Cuenta::getCvv(){return cvv;}
bool Cuenta::setCvv(int _cvv){
    if(_cvv == 0){return false;}
    else{
	cvv = _cvv;
	return true;}}
float Cuenta::getTransferencia(){return transferencia;}
bool Cuenta::setTransferencia(float _trans){
    if(_trans == 0){return false;}
    else{
	transferencia = _trans;
	saldo = saldo-_trans;
	return true;}}

int main() {
    Cuenta miCuenta;
    miCuenta.setNumero("19862374");
    miCuenta.ingresoInteresMes(3.6);
    miCuenta.setTitular("Gonzalez Silva Carlos Josue");
    miCuenta.ingreso(200.5);
    miCuenta.retiro(50);
    miCuenta.setCvv(654);
    miCuenta.setTransferencia(400);
    cout << "Titular: " << miCuenta.getTitular() << endl;
    cout << "Numero de cuenta: " << miCuenta.getNumero() << endl;
    cout << "CVV: ";
    cout << miCuenta.getCvv() << endl;
    cout << "Saldo disponible: ";
    cout << miCuenta.leerSaldo() << endl;
    cout << "Estado de cuenta 0 en rojos 1 en normal ";
    cout << miCuenta.EnRojos() << endl;
    cout << "Movimientos" << endl;
    cout << "Transferencia: ";
    cout << miCuenta.getTransferencia() << endl;
    
    return 0;}
