#include "animais.hpp"
#include "estoque.hpp"
#include <iostream>

int main(){
	
	Animais animalteste(1.15,exotico,false); //criando animal 

	std::cout<<"teste do animal"<<std::endl;
	std::cout<<animalteste.getPreco()<<std::endl; //manipulando animal
	std::cout<<animalteste.getAmeacado()<<std::endl;
	std::cout<<animalteste.getHabitat()<<std::endl;
	animalteste.setAmeacado(true);
	animalteste.setHabitat(nativo);
	animalteste.setPreco(5.78);
	std::cout<<std::endl;

	Tratador tratadorteste("tratador joao",azul); //criando tratador
	
	std::cout<<"teste do tratador"<<std::endl;
	std::cout<<tratadorteste.getNome()<<std::endl; //manipulando tratador
	std::cout<<tratadorteste.getNivel()<<std::endl;
	tratadorteste.setNome("tratador maria");
	tratadorteste.setNivel(verde);

	animalteste.setTratador(tratadorteste); //atribuindo tratador a animal


	Veterinario veterinarioteste("vet alex","crmv123"); //criando veterinario
	
	std::cout<<"teste do tratador"<<std::endl;
	std::cout<<veterinarioteste.getNome()<<std::endl;;
	std::cout<<veterinarioteste.getCrmv()<<std::endl;
	veterinarioteste.setNome("vet carlos");
	veterinarioteste.setCrmv("abcde");
	
	animalteste.setVeterinario(veterinarioteste); //atribuindo veterinario a animal


	// Estoque estoqueteste;
	// estoqueteste.criarAnimal();
	// estoqueteste.listarAnimais();

	std::cout<<animalteste<<std::endl;

return 0;
}