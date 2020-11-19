#pragma once
#include "tratador.hpp"
#include "veterinario.hpp"
#include <memory>

enum Habitat{
	nativo,
	exotico,
	domestico
};

class Animais{
protected:
	double preco;
	Habitat habitat;
	bool ameacado;
	Tratador* tratador=nullptr;			//tentar usar ponteiro inteligente "weak_ptr"
	Veterinario* veterinario=nullptr;	//tentar usar ponteiro inteligente "weak_ptr"

public:
	Animais(double preco, Habitat habitat, bool ameacado);
	Animais();
	~Animais();
	void setPreco(double preco);
	double getPreco();
	void setAmeacado(bool ameacado);
	bool getAmeacado();
	void setHabitat(Habitat habitat);
	Habitat getHabitat();
	void setTratador(Tratador &tratador);
	void setVeterinario(Veterinario &veterinario);
	Tratador* getTratador();
	Veterinario* getVeterinario();
	friend std::ostream& operator<<(std::ostream& o, Animais& a);

};

class Anfibio{

};

class Reptil{

};

class Ave{

};

class Mamifero{

};