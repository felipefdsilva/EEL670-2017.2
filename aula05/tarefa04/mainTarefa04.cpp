/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politénica
 * Departamento de Engenharia Eletrônicae de Computação
 * Disciplina: Linguagem de Computação 2017.2
 * Professor: Miguel Campista
 * Autor: Felipe Ferreira da Silva
 * Classe Agenda
 */

#define OK			0

#include <iostream>
#include "colega.h"
#include "agenda.h"

using namespace std;

int main (){
	Agenda agenda;
	Colega colega1 ("Flopinho","32157100", "classe1", "turmaA");
	Colega colega2 ("Bianquinha", "9984549", "classe1", "turmaB");
	Colega colega3 ("Alfredo", "66791212", "classe2", "turmaC");
	Colega colega4 ("Valter", "1111111", "classe2", "turmaD");

	agenda.push_back (&colega1);
	agenda.push_back (&colega2);
	agenda.push_back (&colega3);
	agenda.push_back (&colega4);

	Agenda agendaXerox (agenda);

	cout << "Depois das inserções:" << endl;
	cout << agenda << endl;

	cout << "E a cópia, como ficou?" << endl;
	cout << agendaXerox << endl;

    Agenda::iterator it = agenda.begin();
    while (((*it)->getNome()).compare("Flopinho")){
		it++;
	}
	agenda.erase(it);

	cout << "Depois de apagar o contato Flopinho:" << endl;
	cout << agenda << endl;

	cout << "Qual a diferença da cópia para a original?" << endl;
	Agenda agendaDiff = agendaXerox - agenda;
	cout << agendaDiff << endl;

	cout << "Vamos concatenar tudo de novo em uma nova:" << endl;
	Agenda agendaFull = agenda + agendaDiff;
	cout << agendaFull << endl;

return OK;
}
