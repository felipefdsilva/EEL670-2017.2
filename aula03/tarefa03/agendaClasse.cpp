/*Universidade Federal do Rio de Janeiro
 * Departamento de Engenharia Eletrônica e de Computação
 * Lingaguens de Programação
 * Professor Miguel Campista
 * Periodo 2017.2
 * Autor: Felipe Ferreira da Silva
 * Agenda usando array de objetos da classe Cadastro
 */

#include "agenda.h"

using namespace std;

unsigned Agenda::numCadastros = 0;

string Cadastro::getName () const{
	return mName;
}
void Cadastro::setName (string name){
	mName = name;
}
string Cadastro::getOccupation () const{
	return mOccupation;
}
void Cadastro::setOcuppation (string occupation){
	mOccupation = occupation;
}
unsigned Cadastro::getAge () const{
	return mAge;
}
void Cadastro::setAge (unsigned age){
	mAge = age;
}

void Agenda::insertCad (Cadastro &cadastro){
	string nome;
	string profissao;
	unsigned idade;

	for (; numCadastros < maxCadastros; numCadastros++){
		cout << "Insira um nome " << endl;
		cin >> nome;
		testSizeName(&nome);
		cadastro.setName(nome);

		cout << "Insira uma profissao" << endl;
		cin >> profissao;
		cadastro.setOcuppation(profissao);

		cout << "Insira uma idade" << endl;
		cin >> idade;
		cadastro.setAge(idade);

		mCadastro[numCadastros] = cadastro;
	}
cout << "Agenda cheia!" << endl;
}

void Agenda::showCadastro () const{
	unsigned i;

	for (i=0; i < maxCadastros; i++) {
		cout << "Nome: " << mCadastro[i].getName();
		cout  << setw(15) << "Profissao: " << mCadastro[i].getOccupation();
		cout  << setw(15) << "Idade: " << mCadastro[i].getAge() << endl;
	}
}

void Agenda::testSizeName(string *name){
	if ((*name).length() > 10){
        *name = (*name).substr(0,9);
        cout << "Nome truncado, pois excede o limite de 10 caracteres" << endl;
	}
}
