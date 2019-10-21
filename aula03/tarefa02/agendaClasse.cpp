/*Universidade Federal do Rio de Janeiro
 * Departamento de Engenharia Eletrônica e de Computação
 * Lingaguens de Programação
 * Professor Miguel Campista
 * Periodo 2017.2
 * Autor: Felipe Ferreira da Silva
 * Agenda usando array de Strings
 */

#include <iostream>
#include <string>
#include "agenda.h"

using namespace std;

unsigned Agenda::numNames = 0;
//Agenda::Agenda (unsigned maxNms):maxNames(maxNms),numNames(0){};

void Agenda::getNames (){
	unsigned i;

	for (i=0; i < maxNames; i++){
		cout << "Nome: " << i+1 << " : " << mNames[i] << endl;
	}
}
void Agenda::setNames (){
   string name;

   for (; numNames < maxNames; numNames++){
		cout << "Insira o nome " << numNames << ":" << endl;
		cin >> name;
		testSizeName(&name);
		mNames[numNames] = name;
   }
	cout << "Agenda cheia!" << endl;
}
void Agenda::testSizeName(string *name){
	if ((*name).length() > 10){
        *name = (*name).substr(0,9);
        cout << "Nome truncado, pois excede o limite de 10 caracteres" << endl;
	}
}
