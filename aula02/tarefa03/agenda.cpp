/*Universidade Federal do Rio de Janeiro
* Departamente de Engenharia Eletrônica
* Linguagens de Programação 2017-2
* Aluno: Felipe Ferreira da Silva
* Agenda
*/
#include <string>
#include <iostream>
#include "agenda.h"

#define OK          0

int
main (){

    Agenda agenda;

    agenda.setNames();
    agenda.getNames();
    return OK;
}
