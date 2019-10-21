/* * Universidade Federal do Rio de Janeiro
 * Escola Politénica
 * Departamento de Engenharia Eletrônicae de Computação
 * Disciplina: Linguagem de Computação 2017.2
 * Professor: Miguel Campista
 * Autor: Felipe Ferreira da Silva
 * Classe Agenda
 */

#ifndef _AGENDA_H_
#define _AGENDA_H_	"agenda.h"

#include <vector>
#include <string>
#include <iostream>
#include "contato.h"

using namespace std;

class Agenda {	
	friend ostream& operator<< (ostream&, Agenda&);
	
	public:
		Agenda ();
		Agenda (const Agenda&);
		Agenda operator+ (Agenda&);
		Agenda operator- (Agenda&);
		void insereContato (Contato*);
		void removeContato (string);

	private:
		vector <Contato*> contatos;
};

#endif
