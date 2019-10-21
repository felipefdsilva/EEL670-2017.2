/*Universidade Federal do Rio de Janeiro
* Escola Politénica
* Departamento de Engenharia Eletrônicae de Computação
* Disciplina: Linguagem de Computação 2017.2
* Professor: Miguel Campista
* Autor: Felipe Ferreira da Silva
* Classe relogio
*/

#include "pontRelogio.h"
#include "relogio.h"

Relogio::Relogio ():horas("hora"), minutos("minuto"), segundos("segundo"){
}

unsigned Relogio::getHoras () const{
	return horas.getHora();
}
unsigned Relogio::getMinutos () const{
	return minutos.getHora();
}
unsigned Relogio::getSegundos () const {
	return segundos.getHora();
}
