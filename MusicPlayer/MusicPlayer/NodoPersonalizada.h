#pragma once
#include "Personalizada.h"
class NodoPersonalizada
{
private:
	Personalizada *perso;
	NodoPersonalizada *Sgte;
	NodoPersonalizada *Ante;

public:
	NodoPersonalizada(void);
	~NodoPersonalizada(void);

	NodoPersonalizada(Personalizada *);

	Personalizada *getPerso();
	void setPersonalizada(Personalizada *);

	NodoPersonalizada *getSgte();
	void setSgte(Personalizada *);

	NodoPersonalizada *getAnte();
	void setAnte(Personalizada *);
};

