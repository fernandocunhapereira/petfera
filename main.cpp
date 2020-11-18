#include "animais.hpp"
#include "estoque.hpp"
#include <iostream>

int main(){
	
	Animais animalteste; 

	animalteste.setPreco(3.15);
	animalteste.setAmeacado(false);
	std::cout<<animalteste.getPreco()<<std::endl;
	std::cout<<animalteste.getAmeacado()<<std::endl;
	animalteste.setAmeacado(true);
	std::cout<<animalteste.getAmeacado()<<std::endl;
	animalteste.setHabitat(exotico);
	std::cout<<animalteste.getHabitat()<<std::endl;
	animalteste.setHabitat(domestico);
	std::cout<<animalteste.getHabitat()<<std::endl;

	Tratador tratadorteste;
	
	tratadorteste.setNome("joao");
	tratadorteste.setNivel(azul);
	std::cout<<tratadorteste.getNome()<<std::endl;
	std::cout<<tratadorteste.getNivel()<<std::endl;

	animalteste.setTratador(tratadorteste);
	
	std::cout<<animalteste.getTratador()->getNome()<<std::endl;
	std::cout<<animalteste.getTratador()->getNivel()<<std::endl;
	tratadorteste.setNome("maria");
	tratadorteste.setNivel(verde);
	std::cout<<animalteste.getTratador()->getNome()<<std::endl;
	std::cout<<animalteste.getTratador()->getNivel()<<std::endl;
	tratadorteste.setNome("andre");
	tratadorteste.setNivel(vermelho);
	std::cout<<animalteste.getTratador()->getNome()<<std::endl;
	std::cout<<animalteste.getTratador()->getNivel()<<std::endl;

	Estoque estoqueteste;
	estoqueteste.criarAnimal();
	estoqueteste.listarAnimais();


return 0;
}