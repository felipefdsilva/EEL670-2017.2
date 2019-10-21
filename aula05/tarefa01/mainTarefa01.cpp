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
#include "contato.h"
#include "agenda.h"

using namespace std;

int main (){
	Agenda agenda;
	Contato contato1 ("Flopinho","32157100");
	Contato contato2 ("Bianquinha", "998454938");
	Contato contato3 ("Alfredo", "66791212");
	Contato contato4 ("Valter", "1111111");

	agenda.insereContato(&contato1);
	agenda.insereContato(&contato2);
	agenda.insereContato(&contato3);
	agenda.insereContato(&contato4);

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
