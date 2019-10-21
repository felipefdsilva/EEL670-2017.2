/*Universidade Federal do Rio de Janeiro
* Departamente de Engenharia Eletrônica
* Linguagens de Programação 2017-2
* Aluno: Felipe Ferreira da Silva
* Agenda
*/

#include <string>
#include <iostream>

using namespace std;

#define NUMERO_NOMES			3

class Agenda{
	public:
		void setNames();
		void getNames ();
	private:
		void testeTamanhoNome (string);
		string names [NUMERO_NOMES];
};
