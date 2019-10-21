/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politénica
 * Departamento de Engenharia Eletrônicae de Computação
 * Disciplina: Linguagem de Computação 2017.2
 * Professor: Miguel Campista
 * Autor: Felipe Ferreira da Silva
 * Classe Agenda
 */

#ifndef _CONTATO_H_
#define _CONTATO_H_	"contato.h"

#include <string>

using namespace std;

class Contato {
	public:
		Contato (string, string);
		string getNome ();
		string getTelefone ();
	private:
		string mNome;
		string mTelefone;
};

#endif
