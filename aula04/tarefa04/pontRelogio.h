/*Universidade Federal do Rio de Janeiro
* Escola Politénica
* Departamento de Engenharia Eletrônicae de Computação
* Disciplina: Linguagem de Computação 2017.2
* Professor: Miguel Campista
* Autor: Felipe Ferreira da Silva
* Classe relogio
*/

#include <string>
#include <time.h>

using namespace std;

#ifndef _PONT_RELOGIO_H_
#define _PONT_RELOGIO_H_	"pontRelogio.h"

class PonteiroDeRelogio {
	public:
		PonteiroDeRelogio(string);	
		void resetHora();	
		unsigned getHora () const;
	private:
		string tipo;
		time_t hora;
		struct tm *infoHora;
};

#endif
