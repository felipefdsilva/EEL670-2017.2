/*Universidade Federal do Rio de Janeiro
 * Departamente de Engenharia Eletrônica
 * Linguagens de Programação 2017-2
 * Aluno: Felipe Ferreira da Silva
 * Calculo de Fibonacci sem classe
 */

#include "fibonacci-sc.h"

int calcularFibonacci (int ordem){
	if (ordem == 0)
		return 0;

	if (ordem == 1)
		return 1;

	return calcularFibonacci(ordem - 1) + calcularFibonacci(ordem - 2);
}
