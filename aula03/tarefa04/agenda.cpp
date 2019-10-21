/*Universidade Federal do Rio de Janeiro
 * Departamento de Engenharia Eletrônica e de Computação
 * Lingaguens de Programação
 * Professor Miguel Campista
 * Periodo 2017.2
 * Autor: Felipe Ferreira da Silva
 * Agenda usando vector de objetos da classe Cadastro
 */

#define OK						0

#include <iostream>
#include <string>
#include <iomanip>
#include "agenda.h"

int main (){
	Cadastro cadastro;
	//Cadastro &ref = cadastro;
	Agenda agenda;

	agenda.insertCad(cadastro);
	agenda.showCadastro();

	return OK;
}
