/*Universidade Federal do Rio de Janeiro
* Escola Politénica
* Departamento de Engenharia Eletrônicae de Computação
* Disciplina: Linguagem de Computação 2017.2
* Professor: Miguel Campista
* Autor: Felipe Ferreira da Silva
* Classe relogio
*/

#define OK		0

#include <iostream>
#include <iomanip>
#include "pontRelogio.h"
#include "relogio.h"

using namespace std;

int main (){
	Relogio relogio;


	cout << "Hora atual (HH:MM:SS): ";
	cout << relogio.getHoras() << setfill('0') << setw(1) << ":";
	cout << relogio.getMinutos() << setfill('0') << setw(1) << ":";
	cout << relogio.getSegundos() << setfill('0') << setw(1) << endl;

	return OK;
}
