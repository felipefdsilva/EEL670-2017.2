/*
 * Universidade Federal do Rio de Janeiro
 * Escola Politénica
 * Departamento de Engenharia Eletrônica e de Computação
 * Disciplina: Linguagem de Computação 2017.2
 * Professor: Miguel Campista
 * Autor: Felipe Ferreira da Silva
 * Classe Colega
 */

#include	"contato.h"
#include	"colega.h"

Colega::Colega (string nome, string telefone, string classe, string turma):Contato (nome, telefone), mClasse (classe), mTurma (turma){
}
string Colega::getClasse (){
	return mClasse;
}
string Colega::getTurma (){
	return mTurma;
}
