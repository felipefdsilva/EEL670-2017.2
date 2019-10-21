/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politénica
 * Departamento de Engenharia Eletrônica e de Computação
 * Disciplina: Linguagem de Computação 2017.2
 * Professor: Miguel Campista
 * Autor: Felipe Ferreira da Silva
 * Classe Colega
 */

#ifndef _COLEGA_H_
#define _COLEGA_H_	"colega.h"

#include "contato.h"

class Colega: public Contato {
	public:
		Colega (string, string, string, string);
		string getClasse ();
		string getTurma ();
	private:
		string mClasse;
		string mTurma;
};

#endif
