/*Universidade Federal do Rio de Janeiro
* Escola Politénica
* Departamento de Engenharia Eletrônicae de Computação
* Disciplina: Linguagem de Computação 2017.2
* Professor: Miguel Campista
* Autor: Felipe Ferreira da Silva
* Classe relogio
*/

#include "pontRelogio.h"

#ifndef _RELOGIO_H_
#define _RELOGIO_H_	"relogio.h"

class Relogio {
	public:
		Relogio ();
		
		unsigned getHoras () const;
		unsigned getMinutos () const;
		unsigned getSegundos () const;
	private:
		PonteiroDeRelogio horas;
		PonteiroDeRelogio minutos;
		PonteiroDeRelogio segundos;
};

#endif
