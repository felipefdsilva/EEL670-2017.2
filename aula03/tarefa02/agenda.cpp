/*Universidade Federal do Rio de Janeiro
 * Departamento de Engenharia Eletrônica e de Computação
 * Lingaguens de Programação
 * Professor Miguel Campista
 * Periodo 2017.2
 * Autor: Felipe Ferreira da Silva
 * Agenda usando array de strings
 */

#define OK						0

#include <iostream>
#include <string>
#include "agenda.h"

using namespace std;

int main (){
	Agenda agenda;

	agenda.setNames();
	agenda.getNames();

	return OK;
}
