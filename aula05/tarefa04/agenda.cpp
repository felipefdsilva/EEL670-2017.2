/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politénica
 * Departamento de Engenharia Eletrônica e de Computação
 * Disciplina: Linguagem de Computação 2017.2
 * Professor: Miguel Campista
 * Autor: Felipe Ferreira da Silva
 * Classe Agenda
 */

#include <iostream>
#include <iomanip>
#include <vector>
#include <iterator>
#include "agenda.h"
#include "colega.h"

using namespace std;

ostream& operator<< (ostream& output, Agenda& agenda){
	vector<Contato *>::iterator it = agenda.begin();

	for (; it != agenda.end(); it++)
		(*it)->print();
	return output;
}
Agenda::Agenda (){}

Agenda::Agenda (const Agenda &agenda){
	(*this) = agenda;
}

Agenda Agenda::operator+ (Agenda &agenda){

	Agenda novaAgenda(*this);
	unsigned indice1, indice2;
	bool achou;

	for (indice1 = 0; indice1 < agenda.size(); indice1++){
		achou = false;
		for (indice2 = 0; indice2 < this->size(); indice2++){
			if (!((this->at(indice2))->getNome()).compare((agenda.at(indice1))->getNome())){
				achou = true;
				break;
			}
		}
		if (!achou){
			novaAgenda.push_back(agenda.at(indice1));
		}
	}
	return novaAgenda;
}
Agenda Agenda::operator- (Agenda &agenda){

	unsigned indice1, indice2;
	Agenda novaAgenda;
	bool achou;
	
	for (indice1 = 0; indice1 < this->size(); indice1++){
		achou = false;
		for (indice2 = 0; indice2 < agenda.size(); indice2++){
			if (!((*this->at(indice1)).getNome()).compare((agenda.at(indice2))->getNome())){
				achou = true;
				break;
			}
		}
		if (!achou){
			novaAgenda.push_back(this->at(indice1));
		}
	}
	return novaAgenda;
}
