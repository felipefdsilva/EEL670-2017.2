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
#include <vector>
#include <iterator>
#include "agenda.h"
#include "contato.h"

using namespace std;

ostream& operator<< (ostream& output, Agenda& agenda){
	vector<Contato *>::iterator it = agenda.contatos.begin();

	for (; it != agenda.contatos.end(); it++)
		output << "Nome: " << (*it)->getNome()
		       << "\tTelefone: " << (*it)->getTelefone() << endl;
	return output;
}
Agenda::Agenda (){
}
Agenda::Agenda (const Agenda &agenda){
	contatos = agenda.contatos;
}

Agenda Agenda::operator+ (Agenda &agenda){

	Agenda novaAgenda(*this);
	unsigned indice1, indice2;
	bool achou;

	for (indice1 = 0; indice1 < agenda.contatos.size(); indice1++){
		achou = false;
		for (indice2 = 0; indice2 < contatos.size(); indice2++){
			if (!((contatos.at(indice2))->getNome()).compare((agenda.contatos.at(indice1))->getNome())){
				achou = true;
				break;
			}
		}
		if (!achou){
			novaAgenda.insereContato(agenda.contatos.at(indice1));
		}
	}
	return novaAgenda;
}
Agenda Agenda::operator- (Agenda &agenda){

	unsigned indice1, indice2;
	Agenda novaAgenda;
	bool achou;
	
	for (indice1 = 0; indice1 < contatos.size(); indice1++){
		achou = false;
		for (indice2 = 0; indice2 < agenda.contatos.size(); indice2++){
			if (!((contatos.at(indice1))->getNome()).compare((agenda.contatos.at(indice2))->getNome())){
				achou = true;
				break;
			}
		}
		if (!achou){
			novaAgenda.insereContato(contatos.at(indice1));
		}
	}
	return novaAgenda;
}
void Agenda::insereContato (Contato *contato){
	contatos.push_back(contato);
}
void Agenda::removeContato (string nome){
	vector<Contato *>::iterator it = contatos.begin();
	while (((*it)->getNome()).compare(nome)){
		it++;
	}
	contatos.erase(it);
}
