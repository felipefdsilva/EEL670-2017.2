/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politénica
 * Departamento de Engenharia Eletrônicae de Computação
 * Disciplina: Linguagem de Computação 2017.2
 * Professor: Miguel Campista
 * Autor: Felipe Ferreira da Silva
 * Classe Contato - Código Fonte
 */

#include <iostream>
#include <iomanip>
#include "contato.h"

Contato::Contato (string nome, string telefone):mNome (nome), mTelefone (telefone){
}
string Contato::getNome (){
	return mNome;
}
string Contato::getTelefone(){
	return mTelefone;
}
void Contato::print (){
	cout << "Nome: " << getNome() << setw(10)
			<< "Telefone: " << getTelefone() << setw(10);
}
