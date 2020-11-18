#include "animais.hpp"
#include <iostream>

void Animais::setPreco(double preco){
	this->preco=preco;
}

double Animais::getPreco(){
	return this->preco;
}

void Animais::setAmeacado(bool ameacado){
	this->ameacado=ameacado;
}

bool Animais::getAmeacado(){
	return this->ameacado;
}

void Animais::setHabitat(Habitat habitat){
	this->habitat=habitat;
}

Habitat Animais::getHabitat(){
	return this->habitat;
}

void Animais::setTratador(Tratador &tratador){
	this->tratador=&tratador;
}

Tratador* Animais::getTratador(){
	return this->tratador;
}