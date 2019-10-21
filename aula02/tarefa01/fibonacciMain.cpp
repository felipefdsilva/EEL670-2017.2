/*Universidade Federal do Rio de Janeiro
 * Departamente de Engenharia Eletrônica
 * Linguagens de Programação 2017-2
 * Aluno: Felipe Ferreira da Silva
 * Calculo de Fibonacci sem classe
 */

#include <iostream>
#include "fibonacci-sc.h"

#define	OK			0

int
main (){

	int numero, ordem;

	cout << "Digite a ordem desejada" << endl;
	cin >> ordem;
	numero = calcularFibonacci (ordem);
	cout << "O numero da ordem "<< ordem << " eh "<< numero << endl;
	return OK;
}
