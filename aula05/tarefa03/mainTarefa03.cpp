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

	agenda.insereContato (&colega1);
	agenda.insereContato (&colega2);
	agenda.insereContato (&colega3);
	agenda.insereContato (&colega4);

	Agenda agendaXerox (agenda);

	cout << "Depois das inserções:" << endl;
	cout << agenda << endl;

	cout << "E a cópia, como ficou?" << endl;
	cout << agendaXerox << endl;

	agenda.removeContato ("Flopinho");
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
