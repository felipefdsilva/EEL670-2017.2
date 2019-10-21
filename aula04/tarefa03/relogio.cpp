/*Universidade Federal do Rio de Janeiro
* Escola Politénica
* Departamento de Engenharia Eletrônicae de Computação
* Disciplina: Linguagem de Computação 2017.2
* Professor: Miguel Campista
* Autor: Felipe Ferreira da Silva
* Classe relogio
*/

#include <time.h>
#include "relogio.h"

Relogio::Relogio (){
	resetHora ();	
}

void Relogio::resetHora(){
	time (&hora);
	infoHora = localtime (&hora);
}

void Relogio::setSegundos (){
	segundos = (*infoHora).tm_sec;
}

unsigned Relogio::getSegundos () const {
	return segundos;
}
void Relogio::setMinutos (){
	minutos = (*infoHora).tm_min;
}

unsigned Relogio::getMinutos () const{
	return minutos;
}
void Relogio::setHoras (){
	horas = (*infoHora).tm_hour;
}

unsigned Relogio::getHoras () const{
	return horas;
}
