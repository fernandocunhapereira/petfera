#ifndef TRATADOR
#define TRATADOR
#include <iostream>

enum Nivel{
	verde,
	azul,
	vermelho
};

class Tratador{
private:
	std::string nome;
	Nivel nivel;
public:
	void setNome(std::string nome);
	std::string getNome();
	void setNivel(Nivel nivel);
	Nivel getNivel();
};

#endif