/*Universidade Federal do Rio de Janeiro
 * Departamente de Engenharia Eletrônica
 * Linguagens de Programação 2017-2
 * Aluno: Felipe Ferreira da Silva
 * Calculo de Fibonacci com classe
 */

#include <iostream>
#include "fibonacci-cc.h"

#define	OK			0

using namespace std;

int
main (){

	Fibonacci fibonacci;
	int ordem;

	cout << "Digite a ordem desejada ";
	cin >> ordem;
	fibonacci.setOrdem (ordem);
	cout << "O numero da ordem " << ordem << " eh " << fibonacci.getNumero() << endl;
	return OK;
}
