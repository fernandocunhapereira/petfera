#include "animais.hpp"
#include <iostream>
#include <iomanip>

Animais::Animais(double preco, Habitat habitat, bool ameacado):preco(preco),habitat(habitat),ameacado(ameacado){}

Animais::Animais(){	
}

Animais::~Animais(){

}

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

void Animais::setVeterinario(Veterinario &veterinario){
	this->veterinario=&veterinario;
}

Veterinario* Animais::getVeterinario(){
	return this->veterinario;
}

std::ostream& operator<<(std::ostream& o, Animais& a){
	std::string strVet;
	if(a.getVeterinario()==nullptr){
		strVet="sem vet";
	}else{
		strVet=a.getVeterinario()->getNome();
	}
	std::string strTra;
	if(a.getTratador()==nullptr){
		strTra="sem trat";
	}else{
		strTra=a.getTratador()->getNome();
	}
	std::string strHab;
	std::string strAme=(a.getAmeacado()==0)?"nao":"sim";
	if(a.getHabitat()==0){
		strHab="nativo";
	}else if(a.getHabitat()==1){
		strHab="exotico";
	}else{
		strHab="domestico";
	}

	o<<"preco ="<<a.getPreco()<<"| habitat ="<<strHab<<"| ameacado ="<<strAme
				<<"| vet. ="<<strVet<<"| trat. ="<<strTra<<std::endl;
return o;
}