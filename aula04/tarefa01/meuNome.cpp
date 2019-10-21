/*Universidade Federal do Rio de Janeiro
* Escola Politénica
* Departamento de Engenharia Eletrônicae de Computação
* Disciplina: Linguagem de Computação 2017.2
* Professor: Miguel Campista
* Autor: Felipe Ferreira da Silva
* Classe MeuNome
*/

#include "meuNome.h"

MeuNome::MeuNome(string name):nome(name){}
 
string MeuNome::getNome (){
	return nome;
}

string MeuNome::getNome() const {
	return nome;
}
