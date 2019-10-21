/*Universidade Federal do Rio de Janeiro
 * Departamento de Engenharia Eletrônica e de Computação
 * Lingaguens de Programação
 * Professor Miguel Campista
 * Periodo 2017.2
 * Autor: Felipe Ferreira da Silva
 * Agenda usando vector
 */

#include <iostream>
#include <string>
#include <vector>
#include "agenda.h"

using namespace std;

Agenda::Agenda (int n){
	maxNames = n;
}

void Agenda::getNames (){
	unsigned i;

	for (i=0; i < mNames.size(); i++){
		cout << "Nome: " << i+1 << " : " << mNames.at(i) << endl;
	}
}
void Agenda::setNames (){
	int i;
   string name;

   for (i=0; mNames.size() < maxNames; i++){
		cout << "Insira o nome " << i << endl;
		cin >> name;
		testSizeName(&name);
		mNames.push_back(name);
   }
	cout << "Agenda cheia!" << endl;
}
void Agenda::testSizeName(string *name){
	if ((*name).length() > 10){
        *name = (*name).substr(0,10);
        cout << "Nome truncado, pois excede o limite de 10 caracteres" << endl;
	}
}
