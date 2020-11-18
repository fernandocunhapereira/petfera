#include "tratador.hpp"

void Tratador::setNome(std::string nome){
	this->nome=nome;
}

std::string Tratador::getNome(){
	return this->nome;
}

void Tratador::setNivel(Nivel nivel){
	this->nivel=nivel;	
}

Nivel Tratador::getNivel(){
	return this->nivel;
}