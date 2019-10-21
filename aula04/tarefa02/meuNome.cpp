/*Universidade Federal do Rio de Janeiro
* Escola Politénica
* Departamento de Engenharia Eletrônicae de Computação
* Disciplina: Linguagem de Computação 2017.2
* Professor: Miguel Campista
* Autor: Felipe Ferreira da Silva
* Classe MeuNome
*/

#include <stdlib.h>
#include "meuNome.h"

MeuNome::MeuNome(string name):nome((char *)malloc(sizeof(char)*name.length())){
	for (unsigned i=0; i < name.length();i++)
		nome[i] = name[i];
	nome[name.length()]='\0';
}

MeuNome::~MeuNome(){free(nome); nome=NULL;}
 
char *MeuNome::getNome (){return nome;}

char *MeuNome::getNome() const {return nome;}
