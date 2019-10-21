/*Universidade Federal do Rio de Janeiro
 * Departamento de Engenharia Eletrônica e de Computação
 * Lingaguens de Programação
 * Professor Miguel Campista
 * Periodo 2017.2
 * Autor: Felipe Ferreira da Silva
 * Agenda usando vector de objetos da classe Cadastro
 */

#include "agenda.h"

using namespace std;

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

	while (mCadastros.size() < maxCadastros){
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

		mCadastros.push_back(cadastro);
	}
}

void Agenda::showCadastro () const{
	unsigned i;

	for (i=0; i < maxCadastros; i++) {
		cout << "Nome: " << mCadastros.at(i).getName();
		cout  << setw(15) << "Profissao: " << mCadastros.at(i).getOccupation();
		cout  << setw(15) << "Idade: " << mCadastros.at(i).getAge() << endl;
	}
}

void Agenda::testSizeName(string *name){
	if ((*name).length() > 10){
        *name = (*name).substr(0,9);
        cout << "Nome truncado, pois excede o limite de 10 caracteres" << endl;
	}
}
