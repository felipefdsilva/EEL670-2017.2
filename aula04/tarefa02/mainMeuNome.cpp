/*Universidade Federal do Rio de Janeiro
* Escola Politénica
* Departamento de Engenharia Eletrônicae de Computação
* Disciplina: Linguagem de Computação 2017.2
* Professor: Miguel Campista
* Autor: Felipe Ferreira da Silva
* Classe MeuNome
*/

#include <iostream>
#include <string>
#include "meuNome.h"

#define OK			0

using namespace std;

int main (){

	string nomeDado;

	cout << "Digite um nome: ";
	getline (cin, nomeDado);

	MeuNome myname1(nomeDado);
	cout << "Nome não const: " << myname1.getNome() << endl;

	const MeuNome myname2(nomeDado);
	cout << "Nome const: " << myname2.getNome() << endl;

	return OK;
}
