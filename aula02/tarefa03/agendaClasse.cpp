/*Universidade Federal do Rio de Janeiro
* Departamente de Engenharia Eletrônica
* Linguagens de Programação 2017-2
* Aluno: Felipe Ferreira da Silva
* Agenda
*/
#include <string>
#include <iostream>
#include "agenda.h"

#define NUMERO_NOMES			3

void Agenda::testeTamanhoNome(string nome) {
	if (nome.length() > 10){
		nome = nome.substr(0,9);
		cout << "Nome truncado, pois excede o limite de 10 caracteres" << endl;
	}
}

void Agenda::setNames() {
	int i;
	string nome;

	for (i=0; i < NUMERO_NOMES; i++){
		cout << "Insira o " << i <<" nome: " << endl;
		cin >> nome;
		testeTamanhoNome(nome);	
		names[i]=nome;
	}
}

void Agenda::getNames() {
	cout << "Primeiro nome: " << names[0] << endl;
	cout << "Segundo nome: " << names[1] << endl;
	cout << "Terceiro nome: " << names[2] << endl;
}
