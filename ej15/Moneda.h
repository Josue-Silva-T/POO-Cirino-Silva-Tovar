#include <string>
#ifndef Moneda_H
#define Moneda_H

class Moneda{
public:
	Moneda(); //Constructor
	Moneda(double valor, std::string divisa, std::string pais, std::string escudo, int año);
	bool setValor(double newvalor);
	bool setDivisa(std::string newdivisa);
	bool setEscudo(std::string newescudo);
	void setAño(int newaño);
	bool setPais(std::string newpais);
	double getValor();
	std::string getDivisa();
	std::string getEscudo();
	std::string getPais();
	int getAño();
	std::string printString();
private:
	double valor;
	std::string pais, escudo, divisa;
	int year;

};

#endif
