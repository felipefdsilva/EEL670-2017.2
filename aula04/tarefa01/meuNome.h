/*Universidade Federal do Rio de Janeiro
* Escola Politénica
* Departamento de Engenharia Eletrônicae de Computação
* Disciplina: Linguagem de Computação 2017.2
* Professor: Miguel Campista
* Autor: Felipe Ferreira da Silva
* Classe MeuNome
*/

#ifndef _MEU_NOME_
#define _MEU_NOME_	"meunome.h"

#include <string>

using namespace std;

class MeuNome {
	public:
		MeuNome(string); 
		string getNome ();
		string getNome() const;
	private:
		string nome;
};
#endif
