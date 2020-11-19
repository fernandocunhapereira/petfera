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

	Tratador tratadorteste("tratador joao",azul);
	
	std::cout<<tratadorteste.getNome()<<std::endl;
	std::cout<<tratadorteste.getNivel()<<std::endl;

	animalteste.setTratador(tratadorteste);
	
	std::cout<<animalteste.getTratador()->getNome()<<std::endl;
	std::cout<<animalteste.getTratador()->getNivel()<<std::endl;
	tratadorteste.setNome("tratador maria");
	tratadorteste.setNivel(verde);
	std::cout<<animalteste.getTratador()->getNome()<<std::endl;
	std::cout<<animalteste.getTratador()->getNivel()<<std::endl;
	tratadorteste.setNome("tratador andre");
	tratadorteste.setNivel(vermelho);
	std::cout<<animalteste.getTratador()->getNome()<<std::endl;
	std::cout<<animalteste.getTratador()->getNivel()<<std::endl;

	Veterinario veterinarioteste("vet alex","crmv123");

	animalteste.setVeterinario(veterinarioteste);
	
	std::cout<<animalteste.getVeterinario()->getNome()<<std::endl;
	std::cout<<animalteste.getVeterinario()->getCrmv()<<std::endl;
	veterinarioteste.setNome("vet carlos");
	veterinarioteste.setCrmv("abcde");
	std::cout<<animalteste.getVeterinario()->getNome()<<std::endl;
	std::cout<<animalteste.getVeterinario()->getCrmv()<<std::endl;
	veterinarioteste.setNome("vet ana");
	veterinarioteste.setCrmv("123xcv4");
	std::cout<<animalteste.getVeterinario()->getNome()<<std::endl;
	std::cout<<animalteste.getVeterinario()->getCrmv()<<std::endl;

	Estoque estoqueteste;
	estoqueteste.criarAnimal();
	estoqueteste.listarAnimais();

	std::cout<<animalteste<<std::endl;

return 0;
}