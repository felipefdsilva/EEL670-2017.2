/*Universidade Federal do Rio de Janeiro
* Escola Politénica
* Departamento de Engenharia Eletrônicae de Computação
* Disciplina: Linguagem de Computação 2017.2
* Professor: Miguel Campista
* Autor: Felipe Ferreira da Silva
* Classe relogio
*/

//#include <iostream>
#include <string>
#include <time.h>
#include "pontRelogio.h"

using namespace std;

PonteiroDeRelogio::PonteiroDeRelogio(const string mTipo){
	tipo = mTipo;
	resetHora();
}

void PonteiroDeRelogio::resetHora(){
	time (&hora);
	infoHora = localtime (&hora);
}

unsigned PonteiroDeRelogio::getHora () const{
	if (!tipo.compare("hora")){
		//cout << "ESTOU NA HORA!!!" << endl;
		return (*infoHora).tm_hour;
	}
	if (!tipo.compare("minuto")){
		//cout << "ESTOU NO MINUTO!!!" << endl;
		return (*infoHora).tm_min;
	}
	if (!tipo.compare("segundo")){	
		//cout << "ESTOU NO SEG!!!" << endl;
		return (*infoHora).tm_sec;
	}
	return 0;
}
